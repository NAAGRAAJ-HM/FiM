#pragma once
/******************************************************************************/
/* File   : ServiceFiM_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceFiM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEFIM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, SERVICEFIM_CODE) GetFunctionPermission       (void);         \
              FUNC(void, SERVICEFIM_CODE) SetFunctionAvailable        (void);         \
              FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnMonitorStatus   (void);         \
              FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnServiceComponentStatus (void);         \
              FUNC(void, SERVICEFIM_CODE) ServiceDemInitFunction             (void);         \
              FUNC(void, SERVICEFIM_CODE) FunctionInhibition          (void);         \
              FUNC(void, SERVICEFIM_CODE) ControlFunctionAvailable    (void);         \
              FUNC(void, SERVICEFIM_CODE) FunctionIdType              (void);         \

#define SERVICEFIM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, SERVICEFIM_CODE) GetFunctionPermission       (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) SetFunctionAvailable        (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnMonitorStatus   (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ServiceDemTriggerOnServiceComponentStatus (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ServiceDemInitFunction             (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) FunctionInhibition          (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) ControlFunctionAvailable    (void) = 0;     \
      virtual FUNC(void, SERVICEFIM_CODE) FunctionIdType              (void) = 0;     \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceFiM_Functionality{
   public:
      SERVICEFIM_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

