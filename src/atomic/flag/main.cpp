/*
std::atomic_flag 是一個 bool 原子型別，共有兩個狀態 set(flag=true) 和 clear(flag=false)，物件必須被 ATOMIC_FLAG_INIT 初始化，而初始狀態為 clear，相當於靜態初始化。
一旦 atimic_flag 初始化後，只有三個操作 test_and_set, clear, ，其行為均為原子操作。

Atomic 類別在建構時的初值方式依據使用的版本會有不同，在 C++ 11 不可使用建構值付值的方式。
https://en.cppreference.com/w/cpp/atomic/atomic_flag/atomic_flag
*/

#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <vector>
#include <sstream>

// flag處於clear狀態，沒有被設定過
std::atomic_flag lock_stream = ATOMIC_FLAG_INIT;
std::stringstream stream;

void append_number(int x) {
    //檢查並設定是個原子操作，如以前沒有設定過則退出迴圈，
    while (lock_stream.test_and_set()) {}
    //每個執行緒都等待前面一個執行緒將lock_stream狀態清楚後跳出迴圈
    stream << "thread #" << x << '\n';
    lock_stream.clear();
}

int main (){
    std::vector<std::thread> threads;
    for (int i=1; i<=10; ++i)
        threads.push_back(std::thread(append_number,i));
    for (auto& th : threads) th.join(); std::cout << stream.str(); return 0;
}
