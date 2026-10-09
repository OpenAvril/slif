#include "../../include/independent/CLIB_LeftHemishpore_STRUCT_User_Algorithm.h"
#include "../../CLIB_ThreadsLog/include/CLIB_ThreadLogs.h"
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise0* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0;
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise1* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1;
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise2* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2;
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise3* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3;
// public.
	slif::Object* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(uint8_t* sysThreadId, unsigned long long* praiseId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(sysThreadId). " << std::endl;
		auto* result = new  std::list<slif::Object*>(1);
		auto temp = result->begin();
		std::advance(temp, 0);
		switch (*praiseId) {
			case 0:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(sysThreadId));
				break;

			case 1:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId));
				break;

			case 2:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId));
				break;

			case 3:
				*temp = reinterpret_cast<slif::Object *>(stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId));
				break;

			default:
				break;
		}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_CLASS_get_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(sysThreadId). " << std::endl;
		return *result->begin();
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot2_SUBSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : dyn_REG_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithmpraise0(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId);
		stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId);
		stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot4_INSTANTIATE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_REG_boot0_DECLARE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm(sysThreadId). " << std::endl;
	}
// private.
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithmpraise0(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithmpraise0(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0 = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithmpraise0(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1 = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2 = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3 = nullptr;
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot1_DEFINE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0 = new class slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise0();
		while(stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1 = new class slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise1();
		while (stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2 = new class slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise2();
		while (stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId). " << std::endl;
	}
	void slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(uint8_t* sysThreadId) {
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId). " << std::endl;
		stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3 = new class slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise3();
		while (stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId) == nullptr) {}
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : CLIB_LeftHemishpore_STRUCT_Algorithm : stat_CLASS_boot3_INITIALISE_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId). " << std::endl;
	}
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise0* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise0;
	}
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise1* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise1;
	}
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise2* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise2;
	}
	slif::CLIB_LeftHemishpore_STRUCT_Algorithm_praise3* slif::CLIB_LeftHemishpore_STRUCT_User_Algorithm::stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(uint8_t* sysThreadId)	{
		std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_REG_get_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3(sysThreadId). " << std::endl;
		return stat_REG_ptr_CLIB_LeftHemishpore_STRUCT_UserAlgorithm_Algorithm_praise3;
	}