#pragma once
/******************************************************************************/
/* File   : ServiceFiM_Version.hpp                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEFIM_AR_RELEASE_VERSION_MAJOR                                    4
#define SERVICEFIM_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICEFIM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICEFIM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICEFIM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICEFIM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

