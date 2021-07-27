/*
thread.join：呼叫該函式會阻塞當前執行緒。阻塞呼叫者(caller)所在的執行緒直至被join的std::thread物件標識的執行緒執行結束。

thread 在宣告完成時便會執行，但主程序若無阻塞會使得主程式優先執行完畢而無視 thread 的運作 ( 依據文獻此時 thread 仍會繼續運作，但不受任何程式監管 )。
因此，使用 thread.join 是確保該 caller 的後續執行必須等待 thread 完成才運作。
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

    std::cout << "main call t1 start" << std::endl;
    t1.join();
    std::cout << "main call t2 start" << std::endl;
    t2.join();
    std::cout << "here is main" << std::endl;
    return 0;
}
