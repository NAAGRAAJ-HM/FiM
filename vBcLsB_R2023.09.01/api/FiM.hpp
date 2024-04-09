#ifndef FIM_H
#define FIM_H

#include "FiM_Types.hpp"
#include "Dem_Types.hpp"
#include "FiM_Cfg.hpp"
#include "FiM_Cfg_Fids.hpp"
#include "FiM_Cfg_PbCfg.hpp"
#include "FiM_Cfg_Version.hpp"

#define FIM_START_SEC_ROM_CODE
#include "FiM_MemMap.hpp"

#if(FIM_CFG_VERSION_INFO_API == FIM_CFG_ON)
void FiM_GetVersionInfo(Std_VersionInfoType* versioninfo);
#endif

#if(FIM_CFG_CHECK_API_CONSISTENCY == TRUE)
Std_ReturnType FiM_GetFunctionPermission(FiM_FunctionIdType FID, boolean* Permission);
#endif

#if(FIM_CFG_SERVICE07_VISIBLE_ERROR_API == FIM_CFG_ON)

Std_ReturnType FiM_GetService07Visibility(FiM_FunctionIdType FID, boolean* Visibility);
#endif

#if(FIM_CFG_DEM_TRIGGERFIMREPORTS == FIM_CFG_ON)
void FiM_DemTriggerOnEventStatus(Dem_EventIdType EventId, Dem_UdsStatusByteType EventStatusOld
   ,       Dem_UdsStatusByteType EventStatusNew);
#endif

#if(FIM_CFG_DEM_TRIGGERFIMREPORTS == FIM_CFG_ON)
void FiM_DemTriggerOnComponentStatus(Dem_ComponentIdType ComponentId, boolean ComponentFailedStatus);
#endif

void FiM_DemInit(void);
void FiM_MainFunction(void);

#define FIM_STOP_SEC_ROM_CODE
#include "FiM_MemMap.hpp"

#endif

