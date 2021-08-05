/*
atomic<bool> 設定為 bool 型態的 atomic 物件 main。

Atomic 類別在建構時的初值方式依據使用的版本會有不同，在 C++ 11 不可使用建構值付值的方式。
https://en.cppreference.com/w/cpp/atomic/atomic_flag/atomic_flag

Segmentation fault issue :
https://stackoverflow.com/questions/29824570
*/

#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <vector>

// Declare Class
class Worker {
public:
    Worker(std::atomic<long>* _count, std::atomic<bool>* _lock) : m_count(_count), m_lock(_lock) {}
    virtual void operator() () {
        for (int i = 0; i < 1000; i++) {
            if ( ! *this->m_lock ) {
                *this->m_count += 1;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }
protected:
    std::atomic<long>* m_count;
    std::atomic<bool>* m_lock;
};

int main () {
    // Declare atomic count variable
    std::atomic<long> count(0);
    std::atomic<bool> lock(false);
    // Declare thread work
    Worker worker(&count, &lock);
    std::thread t = std::thread(worker);
    t.detach();

    // Test script
    std::cout << "Step 1 : count number 1s" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << count << std::endl;

    std::cout << "Step 2 : lock count 1s" << std::endl;
    lock.store(true);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << count << std::endl;

    std::cout << "Step 3 : unlock count 1s" << std::endl;
    lock.store(false);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << count << std::endl;
    return 0;
}
