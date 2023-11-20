#include "Std_Types.hpp"

#include "infSwcServiceFiMSwcApplEcuM.hpp"
#include "FiM.hpp"
#include "FiM_Det.hpp"
#include "FiM_Status.hpp"
#include "FiM_Monitor.hpp"

#define FIM_START_SEC_ROM_CODE
#include "FiM_MemMap.hpp"
void FiM_MainFunction(void){
#if(FIM_CFG_DEM_TRIGGERFIMREPORTS == FIM_CFG_OFF)
   if(FiM_Priv_GetStatusInitialized()){
      if(FiM_Priv_IsDemInitCalled()){
         FiM_Priv_MonitorProc();
      }
      else{
         FIM_PRIV_DET_ERROR(FIM_MAINFUNCTION_ID, FIM_E_DEMINIT_NOT_CALLED);
      }
   }
   else{
      FIM_PRIV_DET_ERROR(FIM_MAINFUNCTION_ID, FIM_E_NOT_INITIALIZED);
   }
#endif
}
#define FIM_STOP_SEC_ROM_CODE
#include "FiM_MemMap.hpp"

