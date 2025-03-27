/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "autosar_swc_counter"
   ARXML schema: "R20-11"
   File generated on: "27-Mar-2025 09:52:18"  */

#ifndef Rte_autosar_swc_counter_h
#define Rte_autosar_swc_counter_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_Runnable_Step_RPort_InData Rte_IRead_autosar_swc_counter_Runnable_Step_RPort_InData

sint32 Rte_IRead_Runnable_Step_RPort_InData(void);

#define Rte_IStatus_Runnable_Step_RPort_InData Rte_IStatus_autosar_swc_counter_Runnable_Step_RPort_InData

Std_ReturnType Rte_IStatus_Runnable_Step_RPort_InData(void);

#define Rte_IWrite_Runnable_Step_SPort_OutData Rte_IWrite_autosar_swc_counter_Runnable_Step_SPort_OutData

void Rte_IWrite_Runnable_Step_SPort_OutData(sint32 u);

#define Rte_IWriteRef_Runnable_Step_SPort_OutData Rte_IWriteRef_autosar_swc_counter_Runnable_Step_SPort_OutData

sint32* Rte_IWriteRef_Runnable_Step_SPort_OutData(void);

/* Entry point functions */
extern FUNC(void, autosar_swc_counter_CODE) Runnable_Init(void);
extern FUNC(void, autosar_swc_counter_CODE) Runnable_Step(void);

/* Parameters */
extern uint8 Rte_CData_K_data;

#define Rte_CData_K                    Rte_CData_autosar_swc_counter_K

uint8 Rte_CData_K(void);

/* AR-Typed Per Instance Memories */
uint8* Rte_Pim_PIM_sum_out(void);
uint8* Rte_Pim_autosar_swc_counter_switch_out(void);
boolean* Rte_Pim_SM_equal_to_count(void);

#endif
