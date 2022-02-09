/*****************************************************/
/* File   : FiM.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "FiM.h"

#include "FiM_EcuM.h"
#include "FiM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
interface_FiM_EcuM_Init FiM_EcuM_Init;
interface_FiM_SchM_Main FiM_SchM_Main;
class_FiM FiM;

interface_EcuM_Init_Client *EcuM_Init_Client_ptr_FiM = &FiM_EcuM_Init;
interface_SchM_Main_Client *SchM_Main_Client_ptr_FiM = &FiM_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, FIM_CODE) interface_FiM_EcuM_Init::InitFunction(void){
}

FUNC(void, FIM_CODE) interface_FiM_SchM_Main::MainFunction(void){
}

FUNC(void, FIM_CODE) class_FiM::GetFunctionPermission(void){
}

FUNC(void, FIM_CODE) class_FiM::SetFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM::DemTriggerOnMonitorStatus(void){
}

FUNC(void, FIM_CODE) class_FiM::DemTriggerOnComponentStatus(void){
}

FUNC(void, FIM_CODE) class_FiM::DemInitFunction(void){
}

FUNC(void, FIM_CODE) class_FiM::GetVersionInfo(void){
}

FUNC(void, FIM_CODE) class_FiM::FunctionInhibition(void){
}

FUNC(void, FIM_CODE) class_FiM::ControlFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM::FunctionIdType(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

