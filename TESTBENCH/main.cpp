#include "../Control/libs/CLIB_MutexQue/include/CLIB_MutexQue.h"
#include "../Control/libs/CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
#include "../Control/libs/CLIB_LaunchQue/include/CLIB_LaunchQue.h"
#include "../OptimusPrime/CLIB_OptimusPrime.h"
#include <iostream>

#include "CLIB_SystemBus.h"
using namespace slif;

int main() {
    auto sysThreadId = new uint8_t();
    *sysThreadId = 0;
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : Running..."));

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : OptimusPrime : instantiateAll."));
    slif::OptimusPrime::instantiateAll(sysThreadId);
    slif::OptimusPrime::instantiateAll(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : OptimusPrime : instantiateAll."));

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : generateProgram(s)."));
    slif::MutexQue::generateProgram(sysThreadId);
    slif::ThreadLogs::generateProgram(sysThreadId);
    slif::LaunchQue::generateProgram(sysThreadId);
    slif::SystemBusses::generateProgram(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : generateProgram(s)."));


    auto handleId_LaunchQue = slif::LaunchQue::generateHandle(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : LaunchQue : reInitialiseHandle."));
    auto MAX_CONCURRENT_THREAD_COUNT = new std::byte();
    *MAX_CONCURRENT_THREAD_COUNT = static_cast<std::byte>(3);
    slif::LaunchQue::reInitialiseHandle(sysThreadId, handleId_LaunchQue, MAX_CONCURRENT_THREAD_COUNT);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : LaunchQue : reInitialiseHandle."));

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : End!."));
    return 0;
}
