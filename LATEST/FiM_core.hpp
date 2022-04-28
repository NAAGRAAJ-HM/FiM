#pragma once
/******************************************************************************/
/* File   : FiM_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_FiM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FIM_COREFUNCTIONALITIES                                                \
              FUNC(void, FIM_CODE) GetFunctionPermission       (void);         \
              FUNC(void, FIM_CODE) SetFunctionAvailable        (void);         \
              FUNC(void, FIM_CODE) DemTriggerOnMonitorStatus   (void);         \
              FUNC(void, FIM_CODE) DemTriggerOnComponentStatus (void);         \
              FUNC(void, FIM_CODE) DemInitFunction             (void);         \
              FUNC(void, FIM_CODE) FunctionInhibition          (void);         \
              FUNC(void, FIM_CODE) ControlFunctionAvailable    (void);         \
              FUNC(void, FIM_CODE) FunctionIdType              (void);         \

#define FIM_COREFUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, FIM_CODE) GetFunctionPermission       (void) = 0;     \
      virtual FUNC(void, FIM_CODE) SetFunctionAvailable        (void) = 0;     \
      virtual FUNC(void, FIM_CODE) DemTriggerOnMonitorStatus   (void) = 0;     \
      virtual FUNC(void, FIM_CODE) DemTriggerOnComponentStatus (void) = 0;     \
      virtual FUNC(void, FIM_CODE) DemInitFunction             (void) = 0;     \
      virtual FUNC(void, FIM_CODE) FunctionInhibition          (void) = 0;     \
      virtual FUNC(void, FIM_CODE) ControlFunctionAvailable    (void) = 0;     \
      virtual FUNC(void, FIM_CODE) FunctionIdType              (void) = 0;     \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_FiM_Functionality{
   public:
      FIM_COREFUNCTIONALITIES_VIRTUAL
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

