#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/io/include/CLIB_MutexQue.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_ThreadsLog/io/include/CLIB_ThreadLogs.h"
#include "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/io/include/CLIB_LaunchQue.h"
#include "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include/CLIB_SystemBus.h"
#include "../OptimusPrime/CLIB_OptimusPrime.h"
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

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: starting : generateProgram(s)." << std::endl;
    //slif::MutexQue::generateProgram(sysThreadId);
    //slif::ThreadLogs::generateProgram(sysThreadId);
    //slif::LaunchQue::generateProgram(sysThreadId);
    //slif::Stemisphore::generateProgram(sysThreadId);
    std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting : generateProgram(s)." << std::endl;

    std::cout << "thread " << std::to_string(*sysThreadId) << " :: Main : End!." << std::endl;
    return 0;
}
