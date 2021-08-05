/*
將控制 thread 執行與控制區分，並以 atomic 控制其運作流程

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

class ThreadController {
public:
    ThreadController(std::atomic<long>* _count) : m_lock(false), m_worker(_count, &m_lock), m_thread(nullptr) {}
    void play() {
        if ( this->m_thread == nullptr ) {
            std::thread t = std::thread(this->m_worker);
            this->m_thread = &t;
            this->m_thread->detach();
        }
        this->m_lock.store(false);
    }
    void stop() {
        this->m_lock.store(true);
    }
protected:
    //
    std::thread* m_thread;
    std::atomic<bool> m_lock;
    Worker m_worker;
};

int main () {
    // Declare atomic count variable
    std::atomic<long> count(0);


    // Declare thread controller & worker
    ThreadController tc(&count);
    tc.play();

    // Test script
    std::cout << "Step 1 : count number 1s" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << count << std::endl;

    std::cout << "Step 2 : lock count 1s" << std::endl;
    tc.stop();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << count << std::endl;

    std::cout << "Step 3 : unlock count 1s" << std::endl;
    tc.play();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << count << std::endl;
    return 0;
}
