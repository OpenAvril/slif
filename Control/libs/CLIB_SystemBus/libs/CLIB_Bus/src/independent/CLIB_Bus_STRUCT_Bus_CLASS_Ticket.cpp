#include "../../include/independent/CLIB_Bus_STRUCT_Bus_CLASS_Ticket.h"
uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId;
    uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId;
    uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId;
    uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId;
// public.
    slif::Ticket::Ticket(uint8_t* sysThreadId, uint8_t* departureAccessId, uint8_t* departureJunctionId, uint8_t* arrivalJunctionId, uint8_t* arrivalAccessId) {
        stat_CLASS_boot0_DECLARE_CLIB_Bus_CLASS_Ticket();
        stat_CLASS_boot1_DEFINE_CLIB_Bus_CLASS_Ticket();
        stat_CLASS_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket();
        stat_REG_boot0_DECLARE_CLIB_Bus_CLASS_Ticket();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket();
        stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input();
        stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input();
        this->set_Departure_AccessId(departureAccessId);
        this->set_Departure_JunctionId(departureJunctionId);
        this->set_Arrival_JunctionId(arrivalJunctionId);
        this->set_Arrival_AccessId(arrivalAccessId);
    }
    slif::Ticket::~Ticket() {
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId;
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId;
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId;
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId;
    }
    uint8_t* slif::Ticket::get_Arrival_AccessId(){
        return stat_get_Arrival_AccessId();
    }
    uint8_t* slif::Ticket::get_Arrival_JunctionId(){
        return stat_get_Arrival_JunctionId();
    }
    uint8_t* slif::Ticket::get_Departure_AccessId(){
        return stat_get_Departure_AccessId();
    }
    uint8_t* slif::Ticket::get_Departure_JunctionId(){
        return stat_get_Departure_JunctionId();
    }
    void slif::Ticket::set_Arrival_AccessId(uint8_t* newValue_arrivalJunctionId){
        stat_set_Arrival_AccessId(*newValue_arrivalJunctionId);
    }
    void slif::Ticket::set_Arrival_JunctionId(uint8_t* newValue_arrivalJunctionId){
        stat_set_Arrival_JunctionId(*newValue_arrivalJunctionId);
    }
    void slif::Ticket::set_Departure_AccessId(uint8_t* newValue_departureAccessId){
        stat_set_Departure_AccessId(*newValue_departureAccessId);
    }
    void slif::Ticket::set_Departure_JunctionId(uint8_t* newValue_departureJunctionId){
        stat_set_Departure_JunctionId(*newValue_departureJunctionId);
    }
// private.
    void slif::Ticket::stat_CLASS_boot0_DECLARE_CLIB_Bus_CLASS_Ticket(){

    }
    void slif::Ticket::stat_CLASS_boot1_DEFINE_CLIB_Bus_CLASS_Ticket(){

    }
    void slif::Ticket::stat_CLASS_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket(){

    }
    void slif::Ticket::stat_CLASS_boot4_INSTANTIATE_CLIB_Bus_CLASS_Ticket(){

    }

    void slif::Ticket::stat_REG_boot0_DECLARE_CLIB_Bus_CLASS_Ticket(){

    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket(){
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureJunctionId();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureAccessId();
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId = nullptr;
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalAccessId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = nullptr;
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureJunctionId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId = nullptr;
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureAccessId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = nullptr;
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input(){
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureJunctionId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureAccessId();
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId = new uint8_t();
        *reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalAccessId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = new uint8_t();
        *reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureJunctionId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId = new uint8_t();
        *reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureAccessId() {
        reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = new uint8_t();
        *reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(){
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureJunctionId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureAccessId();
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalJunctionId() {
        *reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId = static_cast<uint8_t>(0);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalAccessId() {
        *reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = static_cast<uint8_t>(0);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureJunctionId() {
        *reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId = static_cast<uint8_t>(0);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureAccessId() {
        *reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = static_cast<uint8_t>(0);
    }
    uint8_t* slif::Ticket::stat_get_Arrival_AccessId(){
        return reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId;
    }
    uint8_t* slif::Ticket::stat_get_Arrival_JunctionId(){
        return reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId;
    }
    uint8_t* slif::Ticket::stat_get_Departure_AccessId(){
        return reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId;
    }
    uint8_t* slif::Ticket::stat_get_Departure_JunctionId(){
        return reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId;
    }
    void slif::Ticket::stat_set_Arrival_AccessId(uint8_t newValue_arrivalJunctionId){
        *reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalJunctionId = newValue_arrivalJunctionId;;
    }
    void slif::Ticket::stat_set_Arrival_JunctionId(uint8_t newValue_arrivalJunctionId){
        *reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = newValue_arrivalJunctionId;
    }
    void slif::Ticket::stat_set_Departure_AccessId(uint8_t newValue_departureAccessId){
        *reg_ptr_CLIB_Bus_CLASS_Ticket_departureJunctionId = newValue_departureAccessId;;
    }
    void slif::Ticket::stat_set_Departure_JunctionId(uint8_t newValue_departureJunctionId){
        *reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = newValue_departureJunctionId;
    }