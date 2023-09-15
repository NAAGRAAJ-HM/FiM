#ifndef FIM_INIT_H
#define FIM_INIT_H

#include "FiM_Priv_Data.hpp"
#include "FiM_Det.hpp"

#include "CfgSwcServiceFiM.hpp" //TBD: Change to Types_SwcServiceFiM.hpp

#define FIM_START_SEC_RAM_CLEARED
#include "FiM_MemMap.hpp"
extern boolean FiM_StatusInitialized_b;
extern boolean FiM_DemInitStatus_b;
#define FIM_STOP_SEC_RAM_CLEARED
#include "FiM_MemMap.hpp"

#define FIM_START_SEC_RAM_INIT
#include "FiM_MemMap.hpp"
extern const Type_CfgSwcServiceFiM_st* FiM_ConfigParam_pcs;
#define FIM_STOP_SEC_RAM_INIT
#include "FiM_MemMap.hpp"

#define FIM_START_SEC_ROM_CODE
#include "FiM_MemMap.hpp"
LOCAL_INLINE void FiM_Priv_SetStatusInitialized(boolean status){
   FiM_StatusInitialized_b = status;
}

LOCAL_INLINE boolean FiM_Priv_GetStatusInitialized(void){
   return FiM_StatusInitialized_b;
}

LOCAL_INLINE void FiM_Priv_SetDemInitStatus(boolean status){
   FiM_DemInitStatus_b = status;
}

LOCAL_INLINE boolean FiM_Priv_IsDemInitCalled(void){
   return FiM_DemInitStatus_b;
}
#define FIM_STOP_SEC_ROM_CODE
#include "FiM_MemMap.hpp"

extern void infSwcServiceFiMSwcApplEcuM_vInitFunction(const Type_CfgSwcServiceFiM_st* FiMConfigPtr);

#endif

