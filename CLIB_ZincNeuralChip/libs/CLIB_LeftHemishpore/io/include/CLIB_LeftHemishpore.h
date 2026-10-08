#ifndef CLIB_LEFTHEMISPHORE_H
#define CLIB_LEFTHEMISPHORE_H
#include <array>
#include <cstdint>
#include <list>
extern "C" {
	namespace DEVELOPMENT	{
		class CLIB_LeftHemishpore {
		public:
			static void generateProgram(uint8_t* sysThreadId);
			static unsigned char* get_Output(uint8_t* sysThreadId, unsigned char* bytes_praiseId);
			static unsigned char* get_FLAG_isINITIALISED(uint8_t* sysThreadId);
			static unsigned char* get_FLAG_isINSTANTIATED(uint8_t* sysThreadId);
			static unsigned char* get_FLAG_isStackLoaded_ServerInputReceive(uint8_t* sysThreadId);
			static unsigned char* get_FLAG_isStackLoaded_ServerOutputSend(uint8_t* sysThreadId);
			static unsigned char* get_MetaData_PraiseEventId(uint8_t* sysThreadId);
			static void set_InputItemsFor_praise0(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static void set_InputItemsFor_praise1(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static void set_InputItemsFor_praise2(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static void set_InputItemsFor_praise3(uint8_t* sysThreadId, unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static void set_MetaData_PraiseEventId(uint8_t* sysThreadId, unsigned char* bytes);
			static void terminateProgram(uint8_t* sysThreadId);
		private:
			static void CLIB_LeftHemishpore_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId);
			static void CLIB_LeftHemishpore_stat_CLASS_boot1_DEFINE_Framework(uint8_t* sysThreadId);
			static void CLIB_LeftHemishpore_stat_CLASS_boot3_INITIALISE_Framework(uint8_t* sysThreadId);
			static class CLIB_LeftHemishpore_Framework* CLIB_LeftHemishpore_stat_CLASS_get_ptr_CLIB_LeftHemishpore_Framework(uint8_t* sysThreadId, int* handleId);
			static void CLIB_LeftHemishpore_stat_REG_boot1_DEFINE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(uint8_t* sysThreadId);
			static void CLIB_LeftHemishpore_stat_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(uint8_t* sysThreadId);
			static void CLIB_LeftHemishpore_stat_REG_boot3_INITIALISE_CLIB_LeftHemishpore_isFLAG_INSTANTIATED(uint8_t* sysThreadId);
			static std::array<bool, 13>* CLIB_LeftHemishpore_stat_REG_flag_CLIB_LeftHemishpore_array_isINSTANTIATED(uint8_t* sysThreadId);
		};
	}
}
#endif