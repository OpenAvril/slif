
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
#include "../Optimus/CLIB_Optimus.h"
#include <iostream>
#include <thread>
using namespace slif;

int main() {
    auto sysThreadId = new uint8_t();
    *sysThreadId = 0;
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : Running..." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : Optimus : prime." << std::endl;
    slif::Optimus::prime(sysThreadId);
    slif::Optimus::prime(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : Optimus : prime." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : generateProgram(s)." << std::endl;
    slif::MutexQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    slif::ThreadLogs::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    slif::Stemisphore::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    slif::LaunchQue::generateProgram(sysThreadId);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : generateProgram(s)." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : End!." << std::endl;
    return 0;
}
