/******************************************************************************/
/* File   : FiM.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgFiM.hpp"
#include "FiM_core.hpp"
#include "infFiM.hpp"

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
   ,  public class_FiM_Functionality
{
   public:
      module_FiM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, FIM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, FIM_CONFIG_DATA, FIM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FIM_CODE) DeInitFunction (void);
      FUNC(void, FIM_CODE) MainFunction   (void);
      FIM_CORE_FUNCTIONALITIES
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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgFiM;
         }
      }
      else{
#if(STD_ON == FiM_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == FiM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FIM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FIM_CODE) module_FiM::DeInitFunction(void){
#if(STD_ON == FiM_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == FiM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FIM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FIM_CODE) module_FiM::MainFunction(void){
#if(STD_ON == FiM_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == FiM_InitCheck)
   }
   else{
#if(STD_ON == FiM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FIM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FIM_CODE) module_FiM::GetFunctionPermission(void){
}

FUNC(void, FIM_CODE) module_FiM::SetFunctionAvailable(void){
}

FUNC(void, FIM_CODE) module_FiM::DemTriggerOnMonitorStatus(void){
}

FUNC(void, FIM_CODE) module_FiM::DemTriggerOnComponentStatus(void){
}

FUNC(void, FIM_CODE) module_FiM::DemInitFunction(void){
}

FUNC(void, FIM_CODE) module_FiM::FunctionInhibition(void){
}

FUNC(void, FIM_CODE) module_FiM::ControlFunctionAvailable(void){
}

FUNC(void, FIM_CODE) module_FiM::FunctionIdType(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

