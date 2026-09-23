#include "../include/slif_Framework_Global.h"
#include <cstring>
#include <iostream>
// public.
    slif::slif_Framework_Global::slif_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : slif_Framework_Global(threadId)." << std::endl;
        boot0_CLASS_DECLARE_slif_Framework_Global(threadId);
        boot1_CLASS_DEFINE_slif_Framework_Global(threadId);
        boot3_CLASS_INITIALISE_slif_Framework_Global(threadId);
        boot0_REG_DECLARE_slif_Framework_Global(threadId);
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : slif_Framework_Global(threadId)." << std::endl;
    }
    slif::slif_Framework_Global::~slif_Framework_Global() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Global : ~slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : slif_Framework_Global : ~slif_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_Framework_Global::boot0_CLASS_DECLARE_slif_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_CLASS_DECLARE_slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_CLASS_DECLARE_slif_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_Framework_Global::boot1_CLASS_DEFINE_slif_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_CLASS_DEFINE_slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_CLASS_DEFINE_slif_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_Framework_Global::boot3_CLASS_INITIALISE_slif_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_CLASS_INITIALISE_slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_CLASS_INITIALISE_slif_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_Framework_Global::boot0_REG_DECLARE_slif_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_REG_DECLARE_slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot0_REG_DECLARE_slif_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_Framework_Global::boot1_REG_DEFINE_slif_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_REG_DEFINE_slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot1_REG_DEFINE_slif_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_Framework_Global::boot2_REG_SUBSTANTIATE_slif_Framework_Global(uint8_t threadId) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot2_REG_SUBSTANTIATE_slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot2_REG_SUBSTANTIATE_slif_Framework_Global(threadId)." << std::endl;
    }
    void slif::slif_Framework_Global::boot3_REG_INITIALISE_slif_Framework_Global(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_TASKS) {
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_REG_INITIALISE_slif_Framework_Global(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: wq : slif_Framework_Global : boot3_REG_INITIALISE_slif_Framework_Global(threadId)." << std::endl;
    }
// private.
