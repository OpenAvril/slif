#include "../include/SLIF_Framework_Global.h"
#include <cstring>
#include <iostream>
// public.
    slif::SLIF_Framework_Global::SLIF_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : slif_Framework_Global(sysThreadId)." << std::endl;
        boot0_CLASS_DECLARE_slif_Framework_Global(sysThreadId);
        boot1_CLASS_DEFINE_slif_Framework_Global(sysThreadId);
        boot3_CLASS_INITIALISE_slif_Framework_Global(sysThreadId);
        boot0_REG_DECLARE_slif_Framework_Global(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : slif_Framework_Global(sysThreadId)." << std::endl;
    }
    slif::SLIF_Framework_Global::~SLIF_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Global : ~slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Global : ~slif_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_Framework_Global::boot0_CLASS_DECLARE_slif_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_CLASS_DECLARE_slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_CLASS_DECLARE_slif_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_Framework_Global::boot1_CLASS_DEFINE_slif_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_CLASS_DEFINE_slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_CLASS_DEFINE_slif_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_Framework_Global::boot3_CLASS_INITIALISE_slif_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_CLASS_INITIALISE_slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_CLASS_INITIALISE_slif_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_Framework_Global::boot0_REG_DECLARE_slif_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_REG_DECLARE_slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_REG_DECLARE_slif_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_Framework_Global::boot1_REG_DEFINE_slif_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_REG_DEFINE_slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_REG_DEFINE_slif_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_Framework_Global::boot2_REG_SUBSTANTIATE_slif_Framework_Global(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot2_REG_SUBSTANTIATE_slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot2_REG_SUBSTANTIATE_slif_Framework_Global(sysThreadId)." << std::endl;
    }
    void slif::SLIF_Framework_Global::boot3_REG_INITIALISE_slif_Framework_Global(uint8_t* sysThreadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_REG_INITIALISE_slif_Framework_Global(sysThreadId)." << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_REG_INITIALISE_slif_Framework_Global(sysThreadId)." << std::endl;
    }
// private.
