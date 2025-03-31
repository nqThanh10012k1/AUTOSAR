/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "autosar_swc_counter"
   ARXML schema: "R20-11"
   File generated on: "31-Mar-2025 07:40:04"  */

#ifndef Rte_autosar_swc_counter_h
#define Rte_autosar_swc_counter_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_Runnable_Step_Lookup_Lookup Rte_IWrite_autosar_swc_counter_Runnable_Step_Lookup_Lookup

void Rte_IWrite_Runnable_Step_Lookup_Lookup(uint8 u);

#define Rte_IWriteRef_Runnable_Step_Lookup_Lookup Rte_IWriteRef_autosar_swc_counter_Runnable_Step_Lookup_Lookup

uint8* Rte_IWriteRef_Runnable_Step_Lookup_Lookup(void);

/* Entry point functions */
extern FUNC(void, autosar_swc_counter_CODE) Runnable_Init(void);
extern FUNC(void, autosar_swc_counter_CODE) Runnable_Step(void);

/* AR-Typed Per Instance Memories */
uint8* Rte_Pim_autosar_swc_co_UnitDelay_DSTATE(void);

#endif
