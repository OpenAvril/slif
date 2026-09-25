#include "../OptimusPrime/SLIF_OptimusPrime.h"
#include "../Control/libs/SLIF_MutexQue/include/SLIF_MutexQue.h"
#include "../Control/libs/SLIF_LaunchQue/include/SLIF_LaunchQue.h"
using namespace slif;

int main() {

    auto threadId = new uint8_t();
    *threadId = 0;

    slif::OptimusPrime::instantiateAll(threadId);
    slif::OptimusPrime::instantiateAll(threadId);

    slif::MutexQue::generateProgram(threadId);
    slif::LaunchQue::generateProgram(threadId);
    auto handleId_LaunchQue = slif::LaunchQue::generateHandle(threadId);

    auto MAX_CONCURRENT_THREAD_COUNT = new std::byte();
    *MAX_CONCURRENT_THREAD_COUNT = static_cast<std::byte>(3);
    slif::LaunchQue::reInitialiseHandle(threadId, handleId_LaunchQue, MAX_CONCURRENT_THREAD_COUNT);
    return 0;
}
