#include <iostream>
#include <thread>
#include <mutex>

int counter;
std::mutex mtx;

void incrementCounter(int numIncrements){
    for (int i = 0; i < numIncrements; ++i)
    {
        std::lock_guard<std::mutex> lock(mtx);
        ++counter;
    }
}

int main(){
    const int numThreads = 5;
    const int numIncrements = 1000;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i)
    {
        threads.push_back(std::thread(&incrementCounter,numIncrements));
    }

    for (auto& t : threads)
    {
       t.join();
    }

    std::cout << "Counter: "<< counter << std::endl;
    
    return 0;
}