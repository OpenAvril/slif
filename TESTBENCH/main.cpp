#include <iostream>
#include <ostream>

#include "../OptimusPrime/SLIF_OptimusPrime.h"
#include "../Control/libs/SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../Control/libs/SLIF_LaunchQue/include/SLIF_LaunchQue.h"
using namespace slif;

int main() {
    auto threadId = new uint8_t();
    *threadId = 0;
    std::cout << "thread " << std::to_string(*threadId) << " :: Main : Running..." << std::endl;

    std::cout << "thread " << std::to_string(*threadId) << " :: starting : OptimusPrime : instantiateAll." << std::endl;
    slif::OptimusPrime::instantiateAll(threadId);
    slif::OptimusPrime::instantiateAll(threadId);
    std::cout << "thread " << std::to_string(*threadId) << " :: exiting : OptimusPrime : instantiateAll." << std::endl;

    std::cout << "thread " << std::to_string(*threadId) << " :: starting : MutexQue : generateProgram." << std::endl;
    slif::MutexQue::generateProgram(threadId);
    std::cout << "thread " << std::to_string(*threadId) << " :: exiting : MutexQue : generateProgram." << std::endl;

    std::cout << "thread " << std::to_string(*threadId) << " :: starting : LaunchQue : generateProgram." << std::endl;
    slif::LaunchQue::generateProgram(threadId);
    std::cout << "thread " << std::to_string(*threadId) << " :: exiting : LaunchQue : generateProgram." << std::endl;

    auto handleId_LaunchQue = slif::LaunchQue::generateHandle(threadId);
    std::cout << "thread " << std::to_string(*threadId) << " :: starting : LaunchQue : reInitialiseHandle." << std::endl;
    auto MAX_CONCURRENT_THREAD_COUNT = new std::byte();
    *MAX_CONCURRENT_THREAD_COUNT = static_cast<std::byte>(3);
    slif::LaunchQue::reInitialiseHandle(threadId, handleId_LaunchQue, MAX_CONCURRENT_THREAD_COUNT);
    std::cout << "thread " << std::to_string(*threadId) << " :: exiting : LaunchQue : reInitialiseHandle." << std::endl;

    std::cout << "thread " << std::to_string(*threadId) << " :: Main : End!." << std::endl;
    return 0;
}
