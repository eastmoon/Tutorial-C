#include <iostream>
#include <thread>
#include <chrono>

void helloFunction() {
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << "Hello C++11 from function." << std::endl;
}

int main()
{
    // thread executing helloFunction
    std::thread t1(helloFunction);

    // ensure that t1, t2 and t3 have finished before main terminates
    std::cout << "Main 1" << std::endl;
    t1.join();
    std::cout << "Main 2" << std::endl;

    return 0;
}
