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
#define FIM_AR_RELEASE_VERSION_MAJOR                                           4
#define FIM_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FIM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible FIM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(FIM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible FIM_AR_RELEASE_VERSION_MINOR!"
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
         FIM_AR_RELEASE_VERSION_MAJOR
      ,  FIM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
#if(STD_ON == FiM_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == FiM_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfg_CanIf as back-up configuration
            lptrCfg = PBcfg_CanIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == FiM_InitCheck)
   }
#endif
}

FUNC(void, FIM_CODE) module_FiM::DeInitFunction(void){
#if(STD_ON == FiM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == FiM_InitCheck)
   }
#endif
}

FUNC(void, FIM_CODE) module_FiM::MainFunction(void){
#if(STD_ON == FiM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == FiM_InitCheck)
   }
#endif
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

