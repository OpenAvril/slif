#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT_INPUT_PRAISE2_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT_INPUT_PRAISE2_H
namespace CLIBOpenEpiCentre
{
    struct CLIB_OpenEpiCentre_STRUCT_Input_praise2
    {
    public:
        void dyn_REG_boot1_DEFINE_Input_praise2();
        void dyn_REG_boot2_SUBSTANTIATE_Input_praise2();
        void dyn_REG_boot3_INITIALISE_Input_praise2();
        double dyn_REG_get_Item_Input_praise2_valueA();
        double dyn_REG_get_Item_Input_praise2_valueB();
        void dyn_REG_set_Item_Input_praise2_valueA(double newValue);
        void dyn_REG_set_Item_Input_praise2_valueB(double newValue);
    private:
        static double* _stat_REG_ptr_Input_praise2_valueA;
        static double* _stat_REG_ptr_Input_praise2_valueB;
        static void stat_REG_boot1_DEFINE_Input_praise2_valueA();
        static void stat_REG_boot1_DEFINE_Input_praise2_valueB();
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise2_valueA();
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise2_valueB();
        static void stat_REG_boot3_INITIALISE_Input_praise2_valueA();
        static void stat_REG_boot3_INITIALISE_Input_praise2_valueB();
        static double* stat_REG_get_Ptr_Input_praise2_valueA();
        static double* stat_REG_get_Ptr_Input_praise2_valueB();
    };
}
#endif