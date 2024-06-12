/******************************************************************************/
/* File   : ServiceFiM.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceFiM.hpp"
#include "infServiceFiM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceFiM, SERVICEFIM_VAR) ServiceFiM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEFIM_CONST,       SERVICEFIM_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEFIM_CONFIG_DATA, SERVICEFIM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceFiM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceFiM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceFiM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceFiM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEFIM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::DeInitFunction(
   void
){
#if(STD_ON == ServiceFiM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceFiM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceFiM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEFIM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::MainFunction(
   void
){
#if(STD_ON == ServiceFiM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceFiM_InitCheck)
   }
   else{
#if(STD_ON == ServiceFiM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEFIM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::GetFunctionPermission(
   void
){
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::SetFunctionAvailable(
   void
){
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::ServiceDemTriggerOnMonitorStatus(
   void
){
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::ServiceDemTriggerOnServiceComponentStatus(
   void
){
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::ServiceDemInitFunction(
   void
){
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::FunctionInhibition(
   void
){
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::ControlFunctionAvailable(
   void
){
}

FUNC(void, SERVICEFIM_CODE) module_ServiceFiM::FunctionIdType(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

