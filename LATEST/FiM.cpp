/******************************************************************************/
/* File   : FiM.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "FiM_Cfg.h"
#include "infFiM_EcuM.h"
#include "infFiM_Dcm.h"
#include "infFiM_SchM.h"

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
      FUNC(void, FIM_CODE) InitFunction   (void);
      FUNC(void, FIM_CODE) DeInitFunction (void);
      FUNC(void, FIM_CODE) GetVersionInfo (void);
      FUNC(void, FIM_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, FIM_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_FiM, FIM_VAR) FiM;
CONSTP2VAR(infEcuMClient, FIM_VAR, FIM_CONST) gptrinfEcuMClient_FiM = &FiM;
CONSTP2VAR(infDcmClient,  FIM_VAR, FIM_CONST) gptrinfDcmClient_FiM  = &FiM;
CONSTP2VAR(infSchMClient, FIM_VAR, FIM_CONST) gptrinfSchMClient_FiM = &FiM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FIM_CODE) module_FiM::InitFunction(void){
   FiM.IsInitDone = E_OK;
}

FUNC(void, FIM_CODE) module_FiM::DeInitFunction(void){
   FiM.IsInitDone = E_NOT_OK;
}

FUNC(void, FIM_CODE) module_FiM::GetVersionInfo(void){
#if(STD_ON == FiM_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, FIM_CODE) module_FiM::MainFunction(void){
}

#include "FiM_Unused.h"

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

