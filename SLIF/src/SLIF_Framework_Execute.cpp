#include "SLIF_Framework_Execute.h"
#include "slif_MutexQue.h"
#include "slif_MutexQue_Framework.h"
#include "slif_MutexQue_Framework_App.h"
#include "slif_MutexQue_Framework_App_Control.h"
#include "slif_MutexQue_Framework_Global.h"
#include <iostream>
std::list<void*>* slif::SLIF_Framework_Execute::_stat_PGM_CLIB_slif_MutexQue;
// public.
    slif::SLIF_Framework_Execute::SLIF_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
        stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId);
        stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId);
        stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId);
        stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
    }
    slif::SLIF_Framework_Execute::~SLIF_Framework_Execute() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Execute : slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_REG_boot1_DEFINE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot2_SUBSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_REG_boot3_INITIALISE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_REG_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : dyn_PGM_boot4_INSTANTIATE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_CLASS_boot0_DECLARE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_CLASS_boot1_DEFINE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot1_DEFINE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_CLASS_boot3_INITIALISE_slif_Framework_Execute(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_REG_boot0_DECLARE_slif_Framework_Execute(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Execute : stat_REG_boot0_DECLARE_slif_Framework_Execute(threadId)." << std::endl;
    }
// private.
    void slif::SLIF_Framework_Execute::stat_PGM_boot1_DEFINE_CLIB_slif_MutexQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        _stat_PGM_CLIB_slif_MutexQue = nullptr;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot1_DEFINE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_PGM_boot2_SUBSTANTIATE_CLIB_slif_MutexQue(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        auto MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY = new std::byte();
        *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY = static_cast<std::byte>(2);
        _stat_PGM_CLIB_slif_MutexQue = new std::list<void*>();
        _stat_PGM_CLIB_slif_MutexQue->resize(1);
        _stat_PGM_CLIB_slif_MutexQue->assign(0, slif::MutexQue::generateProgram(threadId));
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    void slif::SLIF_Framework_Execute::stat_PGM_boot3_INITIALISE_CLIB_slif_MutexQue(uint8_t* threadId, std::byte* DATA_CLUSTER_ID, const std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
        auto temp = stat_PGM_get_array_of_ptrPGM_CLIB_slif_MutexQue(threadId)->begin();
        std::advance(temp, static_cast<uint8_t>(*DATA_CLUSTER_ID));
        auto tempObj = static_cast<slif_MutexQue_Framework*>(*temp);
        tempObj->dyn_CLASS_get_ptr_slif_MutexQue_Global(threadId)->dyn_REG_set_slif_MutexQue_number_Of_Implemented_Threads(threadId, *MAX_NUMBER_OF_THREADS_FOR_ACCESS);
        tempObj->dyn_CLASS_get_ptr_slif_MutexQue_App(threadId)->dyn_CLASS_get_ptr_slif_MutexQue_App_Control(threadId)->dyn_REG_boot3_INITIALISE_slif_MutexQue_Framework_App_Control_For_New_Access_Count(threadId, tempObj);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_LaunchQue_Framework_Execute : stat_PGM_boot3_INITIALISE_CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueMutexQue(threadId)." << std::endl;
    }
    std::list<void*>* slif::SLIF_Framework_Execute::stat_PGM_get_array_of_ptrPGM_CLIB_slif_MutexQue(uint8_t* threadId) {
        return _stat_PGM_CLIB_slif_MutexQue;
    }
