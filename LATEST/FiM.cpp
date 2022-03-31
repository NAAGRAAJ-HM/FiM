/******************************************************************************/
/* File   : FiM.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infFiM_EcuM.hpp"
#include "infFiM_Dcm.hpp"
#include "infFiM_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FIM_AR_RELEASE_MAJOR_VERSION                                           4
#define FIM_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FIM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible FIM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(FIM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible FIM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_FiM:
      public abstract_module
{
   public:
      module_FiM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, FIM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, FIM_CONFIG_DATA, FIM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FIM_CODE) DeInitFunction (void);
      FUNC(void, FIM_CODE) MainFunction   (void);
};

extern VAR(module_FiM, FIM_VAR) FiM;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, FIM_VAR, FIM_CONST) gptrinfEcuMClient_FiM = &FiM;
CONSTP2VAR(infDcmClient,  FIM_VAR, FIM_CONST) gptrinfDcmClient_FiM  = &FiM;
CONSTP2VAR(infSchMClient, FIM_VAR, FIM_CONST) gptrinfSchMClient_FiM = &FiM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgFiM.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_FiM, FIM_VAR) FiM(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FIM_CODE) module_FiM::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, FIM_CONFIG_DATA, FIM_APPL_CONST) lptrCfgModule
){
   if(E_OK == IsInitDone){
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == FiM_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_FiM as back-up configuration
      }
      IsInitDone = E_OK;
   }
}

FUNC(void, FIM_CODE) module_FiM::DeInitFunction(void){
   if(E_OK != IsInitDone){
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
      IsInitDone = E_NOT_OK;
   }
}

FUNC(void, FIM_CODE) module_FiM::MainFunction(void){
}

class class_FiM_Unused{
   public:
      FUNC(void, FIM_CODE) GetFunctionPermission       (void);
      FUNC(void, FIM_CODE) SetFunctionAvailable        (void);
      FUNC(void, FIM_CODE) DemTriggerOnMonitorStatus   (void);
      FUNC(void, FIM_CODE) DemTriggerOnComponentStatus (void);
      FUNC(void, FIM_CODE) DemInitFunction             (void);
      FUNC(void, FIM_CODE) FunctionInhibition          (void);
      FUNC(void, FIM_CODE) ControlFunctionAvailable    (void);
      FUNC(void, FIM_CODE) FunctionIdType              (void);
};

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

FUNC(void, FIM_CODE) class_FiM_Unused::FunctionInhibition(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::ControlFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::FunctionIdType(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

