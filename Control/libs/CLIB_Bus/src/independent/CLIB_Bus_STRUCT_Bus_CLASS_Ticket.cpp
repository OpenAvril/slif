#include "../../include/independent/CLIB_Bus_STRUCT_Bus_CLASS_Ticket.h"
uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId;
    uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId;
    uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_departureBusId;
    uint8_t* slif::Ticket::reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId;
// public.
    slif::Ticket::Ticket(uint8_t* sysThreadId, uint8_t* departureAccessId, uint8_t* departureBusId, uint8_t* arrivalBusId, uint8_t* arrivalAccessId) {
        stat_CLASS_boot0_DECLARE_CLIB_Bus_CLASS_Ticket();
        stat_CLASS_boot1_DEFINE_CLIB_Bus_CLASS_Ticket();
        stat_CLASS_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket();
        stat_REG_boot0_DECLARE_CLIB_Bus_CLASS_Ticket();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket();
        stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input();
        stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input();
        this->set_Departure_AccessId(departureAccessId);
        this->set_Departure_BusId(departureBusId);
        this->set_Arrival_BusId(arrivalBusId);
        this->set_Arrival_AccessId(arrivalAccessId);
    }
    slif::Ticket::~Ticket() {
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId;
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId;
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_departureBusId;
        delete reg_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId;
    }
    uint8_t slif::Ticket::get_Arrival_AccessId(){
        return *stat_get_Arrival_AccessId();
    }
    uint8_t slif::Ticket::get_Arrival_BusId(){
        return *stat_get_Arrival_BusId();
    }
    uint8_t slif::Ticket::get_Departure_AccessId(){
        return *stat_get_Departure_AccessId();
    }
    uint8_t slif::Ticket::get_Departure_BusId(){
        return *stat_get_Departure_BusId();
    }
    void slif::Ticket::set_Arrival_AccessId(uint8_t* newValue_arrivalBusId){
        stat_set_Arrival_AccessId(*newValue_arrivalBusId);
    }
    void slif::Ticket::set_Arrival_BusId(uint8_t* newValue_arrivalBusId){
        stat_set_Arrival_BusId(*newValue_arrivalBusId);
    }
    void slif::Ticket::set_Departure_AccessId(uint8_t* newValue_departureAccessId){
        stat_set_Departure_AccessId(*newValue_departureAccessId);
    }
    void slif::Ticket::set_Departure_BusId(uint8_t* newValue_departureBusId){
        stat_set_Departure_BusId(*newValue_departureBusId);
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
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalBusId();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureBusId();
        stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureAccessId();
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalBusId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId = nullptr;
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_arrivalAccessId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = nullptr;
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureBusId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_departureBusId = nullptr;
    }
    void slif::Ticket::stat_REG_boot1_DEFINE_CLIB_Bus_CLASS_Ticket_departureAccessId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = nullptr;
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_OpenEpiCentre_STRUCT_Input(){
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalBusId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureBusId();
        stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureAccessId();
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalBusId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId = new uint8_t();
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_arrivalAccessId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = new uint8_t();
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureBusId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_departureBusId = new uint8_t();
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_departureBusId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot2_SUBSTANTIATE_CLIB_Bus_CLASS_Ticket_departureAccessId() {
        _REG_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = new uint8_t();
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = static_cast<uint8_t>(INT8_MAX);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_OpenEpiCentre_STRUCT_Input(){
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalBusId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalAccessId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureBusId();
        stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureAccessId();
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalBusId() {
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId = static_cast<uint8_t>(0);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_arrivalAccessId() {
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = static_cast<uint8_t>(0);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureBusId() {
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_departureBusId = static_cast<uint8_t>(0);
    }
    void slif::Ticket::stat_REG_boot3_INITIALISE_CLIB_Bus_CLASS_Ticket_departureAccessId() {
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = static_cast<uint8_t>(0);
    }
    uint8_t* slif::Ticket::stat_get_Arrival_AccessId(){
        return _REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId;
    }
    uint8_t* slif::Ticket::stat_get_Arrival_BusId(){
        return _REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId;
    }
    uint8_t* slif::Ticket::stat_get_Departure_AccessId(){
        return _REG_ptr_CLIB_Bus_CLASS_Ticket_departureBusId;
    }
    uint8_t* slif::Ticket::stat_get_Departure_BusId(){
        return _REG_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId;
    }
    void slif::Ticket::stat_set_Arrival_AccessId(uint8_t newValue_arrivalBusId){
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalBusId = newValue_arrivalBusId;;
    }
    void slif::Ticket::stat_set_Arrival_BusId(uint8_t newValue_arrivalBusId){
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_arrivalAccessId = newValue_arrivalBusId;
    }
    void slif::Ticket::stat_set_Departure_AccessId(uint8_t newValue_departureAccessId){
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_departureBusId = newValue_departureAccessId;;
    }
    void slif::Ticket::stat_set_Departure_BusId(uint8_t newValue_departureBusId){
        *_REG_ptr_CLIB_Bus_CLASS_Ticket_departureAccessId = newValue_departureBusId;
    }