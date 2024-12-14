/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "AUTOSAR"
   ARXML schema: "R21-11"
   File generated on: "14-Dec-2024 15:41:03"  */

#ifndef Rte_Type_h
#define Rte_Type_h
#include "rtwtypes.h"
#include "Std_Types.h"

/* AUTOSAR RTE Status Types */
#ifndef RTE_E_OK
#define RTE_E_OK                       (0x00)
#endif

#ifndef RTE_E_LOST_DATA
#define RTE_E_LOST_DATA                (0x40)
#endif

#ifndef RTE_E_LIMIT
#define RTE_E_LIMIT                    (0x82)
#endif

#ifndef E2E_E_OK
#define E2E_E_OK                       (0x00)
#endif

#ifndef E2EPW_STATUS_OK
#define E2EPW_STATUS_OK                (0x00)
#endif

#ifndef E2EPW_STATUS_OKSOMELOST
#define E2EPW_STATUS_OKSOMELOST        (0x20)
#endif

/* AUTOSAR Implementation data types, specific to software component */
typedef float64 Double;
typedef uint16 UInt16;
typedef void* Rte_Instance;

#endif
