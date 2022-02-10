/*****************************************************/
/* File   : FiM.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"

#include "FiM_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_FiM : public class_module{
   public:
      FUNC(void, FIM_CODE) InitFunction   (void);
      FUNC(void, FIM_CODE) DeInitFunction (void);
      FUNC(void, FIM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_FiM FiM;

interface_EcuM_Client *EcuM_Client_ptr_FiM = &FiM;
interface_SchM_Client *SchM_Client_ptr_FiM = &FiM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, FIM_CODE) module_FiM::InitFunction(void){
}

FUNC(void, FIM_CODE) module_FiM::MainFunction(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::GetFunctionPermission(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::SetFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::DemTriggerOnMonitorStatus(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::DemTriggerOnComponentStatus(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::DemInitFunction(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::GetVersionInfo(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::FunctionInhibition(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::ControlFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::FunctionIdType(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

