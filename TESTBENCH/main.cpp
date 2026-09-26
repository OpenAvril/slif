#include "../Control/libs/SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../Control/libs/SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
#include "../Control/libs/SLIF_LaunchQue/include/SLIF_LaunchQue.h"
#include "../OptimusPrime/SLIF_OptimusPrime.h"
#include <iostream>
using namespace slif;

int main() {
    auto sysThreadId = new uint8_t();
    *sysThreadId = 0;
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : Running..." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : OptimusPrime : instantiateAll." << std::endl;
    slif::OptimusPrime::instantiateAll(sysThreadId);
    slif::OptimusPrime::instantiateAll(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : OptimusPrime : instantiateAll." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : MutexQue : generateProgram." << std::endl;
    slif::MutexQue::generateProgram(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : MutexQue : generateProgram." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : LaunchQue : generateProgram." << std::endl;
    slif::LaunchQue::generateProgram(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : LaunchQue : generateProgram." << std::endl;

    auto handleId_LaunchQue = slif::LaunchQue::generateHandle(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : LaunchQue : reInitialiseHandle." << std::endl;
    auto MAX_CONCURRENT_THREAD_COUNT = new std::byte();
    *MAX_CONCURRENT_THREAD_COUNT = static_cast<std::byte>(3);
    slif::LaunchQue::reInitialiseHandle(sysThreadId, handleId_LaunchQue, MAX_CONCURRENT_THREAD_COUNT);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : LaunchQue : reInitialiseHandle." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : End!." << std::endl;
    return 0;
}
