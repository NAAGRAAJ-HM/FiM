#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_FiM.h"

class class_FiM{
   public:
      FUNC(void, FIM_CODE) InitFunction                (void);
      FUNC(void, FIM_CODE) GetFunctionPermission       (void);
      FUNC(void, FIM_CODE) SetFunctionAvailable        (void);
      FUNC(void, FIM_CODE) DemTriggerOnMonitorStatus   (void);
      FUNC(void, FIM_CODE) DemTriggerOnComponentStatus (void);
      FUNC(void, FIM_CODE) DemInitFunction             (void);
      FUNC(void, FIM_CODE) GetVersionInfo              (void);
      FUNC(void, FIM_CODE) MainFunction                (void);
      FUNC(void, FIM_CODE) FunctionInhibition          (void);
      FUNC(void, FIM_CODE) ControlFunctionAvailable    (void);
      FUNC(void, FIM_CODE) FunctionIdType              (void);
};

extern class_FiM FiM;

