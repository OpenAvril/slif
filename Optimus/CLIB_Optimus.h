#ifndef CLIB_CLIB_PACKAGE_OPTIMUSPRIME_H
#define CLIB_CLIB_PACKAGE_OPTIMUSPRIME_H
#include <array>
#include <cstdint>
extern "C" {
    namespace slif {
        class Optimus {
        public:
            static void prime(uint8_t* sysThreadId);
        private:
            static void slif_Optimus_App_FUNCT_prime(uint8_t* sysThreadId);
            static std::array<bool, 1> slif_Optimus_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId);
            static class Object* msbByteArray_To_ObjDATA(uint8_t* sysThreadId, unsigned char* byteArray_DATA);
            static bool msbByteArray_To_valueOfmsbBool(uint8_t* sysThreadId, unsigned char* bytes_Array);
            static int* msbByteArray_To_valueOfmsbInt(uint8_t* sysThreadId, unsigned char* bytes_Array);
            static double* msbByteArray_To_valueOfmsbDouble(uint8_t* sysThreadId, unsigned char* bytes_Array);
            static uint8_t* msbByteArray_To_valueOfmsbuint8_t(uint8_t* sysThreadId, unsigned char* bytes_Array);
            static unsigned long long* msbByteArray_To_valueOfmsbunsignedLongLong(uint8_t* sysThreadId, unsigned char* bytes_Array);
            static unsigned char* objDATA_To_MsbByteArray(uint8_t* sysThreadId, class Object* DATA);
            static unsigned char* valueofMsbBool_to_MsbByteArray(uint8_t* sysThreadId, bool newValue_Bool);
            static unsigned char* valueofMsbInt_To_MsbByteArray(uint8_t* sysThreadId, int* newValue_Int);
            static unsigned char* valueofMsbDouble_To_MsbByteArray(uint8_t* sysThreadId, double* newValue_Double);
            static unsigned char* valueofMsbUnsignedLongLong_to_ByteArray(uint8_t* sysThreadId, unsigned long long* newValue_ULongLong);
            static unsigned char* valueofMsbuint8_t_To_MsbByteArray(uint8_t* sysThreadId, uint8_t* newValue_uint8_t);
        };
    }
}
#endif
