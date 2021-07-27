/*
thread.detach：將當前執行緒物件所代表的執行例項與該執行緒物件分離，使得執行緒的執行可以單獨進行。一旦執行緒執行完畢，它所分配的資源將會被釋放。

thread 在宣告完成時便會執行，因此 detach 執行與否結果都會讓 caller 直接執行到最後，而 detach 執行與否差異在此執行緒結束後的資源釋放。
*/

#include <iostream>
#include <thread>
#include <unistd.h>

void demo1() {
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Hello from demo1." << std::endl;
        sleep(1);
    }
}

void demo2() {
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Hello from demo2." << std::endl;
        sleep(1);
    }
}

int main()
{
    std::thread t1(demo1);
    std::thread t2(demo2);

    t1.detach();
    t2.detach();

    sleep(5);
    std::cout << "here is main" << std::endl;
    return 0;
}
