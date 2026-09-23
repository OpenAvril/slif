#ifndef CLIBOpenEpiCentre_CLIB_OpenEpiCentre_H
#define CLIBOpenEpiCentre_CLIB_OpenEpiCentre_H
#include <array>
#include <cstdint>
#include <list>
extern "C" {
	namespace CLIBOpenEpiCentre	{
		class CLIB_OpenEpiCentre {
		public:
			static void* CLIB_OpenEpiCentre_app_FUNCT_generate_Program(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_app_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise0(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static void CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise1(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static void CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise2(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static void CLIB_OpenEpiCentre_app_FUNCT_set_Items_Input_praise3(uint8_t threadId, const unsigned char* bytesPraiseId, unsigned char* bytesValue_A, unsigned char* bytesValue_B);
			static unsigned char* CLIB_OpenEpiCentre_app_FUNCT_get_Items_Output_praise0(uint8_t threadId, std::list<class Object*>* sampleOutput);
			static void CLIB_OpenEpiCentre_app_FUNCT_terminate_Program(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerInputReceive(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_dyn_REG_get_FLAG_isStackLoaded_ServerOutputSend(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_dyn_REG_get_FLAG_IsInitialised_CLIBOpenEpiCentre(uint8_t threadId);
			static unsigned char* CLIB_OpenEpiCentre_io_PRAISE_get_MetaData_PraiseEventId(uint8_t threadId);
			static void CLIB_OpenEpiCentre_io_PRAISE_set_MetaData_PraiseEventId(uint8_t threadId, unsigned char* bytes);
		private:
			static void CLIB_OpenEpiCentre_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_CLASS_boot1_DEFINE_Framework(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_CLASS_boot3_INITIALISE_Framework(uint8_t threadId);
			static class CLIB_OpenEpiCentre_Framework* CLIB_OpenEpiCentre_stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId);
			static void CLIB_OpenEpiCentre_stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFLAG_INSTANTIATED(uint8_t threadId);
			static std::array<bool, 28>* CLIB_OpenEpiCentre_stat_REG_flag_CLIB_OpenEpiCentre_array_isINSTANTIATED(uint8_t threadId);
		};
	}
}
#endif