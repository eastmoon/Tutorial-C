/*
mutex：是用來保證執行緒同步的，防止不同的執行緒同時操作同一個共享資料。
*/

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <unistd.h>

int count = 20;
std::mutex coutMutex;

class Worker {
public:
    Worker(int _id, int _ms) : m_id(_id), m_ms(_ms) {};
    void operator() () {
        while(count > 0) {
            // begin work
            std::this_thread::sleep_for(std::chrono::milliseconds(this->m_ms));
            // end work
            coutMutex.lock();
            --count;
            std::cout << "Worker " << this->m_id << " : " << count << std::endl;
            coutMutex.unlock();
        }
    }
private:
    int m_id;
    int m_ms;
};

int main()
{
    std::thread t1(Worker(1, 100));
    std::thread t2(Worker(2, 200));

    t1.join();
    t2.join();
    std::cout << "End count." << std::endl;
    return 0;
}
