#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_ALGORITHMS_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_ALGORITHMS_H
#include "../engine/CLIB_OpenEpiCentre_Framework.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT_Concurrent.h"
#include <cstdint>
#include <list>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre_Algorithms
    {
    public:
        CLIB_OpenEpiCentre_Algorithms();
        virtual ~CLIB_OpenEpiCentre_Algorithms();
        struct CLIB_OpenEpiCentre_STRUCT_Concurrent* dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(uint8_t concurrentthreadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm(class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Algorithm();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Algorithm();
    private:
        static std::list<struct CLIB_OpenEpiCentre_STRUCT_Concurrent*>* _stat_REG_ptr_list_Of_ptr_Concurrent;
        static void stat_REG_boot1_DEFINE_List_Of_ptr_Concurrent();
        static void stat_REG_boot2_SUBSTANTIATE_list_Of_ptr_Concurrent(class CLIB_OpenEpiCentre_Framework* obj);
        static void stat_REG_boot3_INITIALISE_list_Of_ptr_Concurrent(class CLIB_OpenEpiCentre_Framework* obj, struct CLIB_OpenEpiCentre_STRUCT_Concurrent* objConcurrent);
        static std::list<struct CLIB_OpenEpiCentre_STRUCT_Concurrent*>* stat_REG_get_ptr_list_Of_ptr_Concurrent();
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_ALGORITHMS_H
