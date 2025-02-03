/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "E2E"
   ARXML schema: "R21-11"
   File generated on: "04-Feb-2025 01:26:38"  */

#ifndef Rte_E2E_h
#define Rte_E2E_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define E2EPW_Read_RPort_In2           E2EPW_Read_E2E_RPort_In2

uint32 E2EPW_Read_RPort_In2(Double* u);

#define Rte_IStatus_untitled_Step_RPort_In2 Rte_IStatus_E2E_untitled_Step_RPort_In2

Std_ReturnType Rte_IStatus_untitled_Step_RPort_In2(void);

#define E2EPW_ReadInit_RPort_In2       E2EPW_ReadInit_E2E_RPort_In2

Std_ReturnType E2EPW_ReadInit_RPort_In2(void);

#define E2EPW_Write_PPort_Out2         E2EPW_Write_E2E_PPort_Out2

uint32 E2EPW_Write_PPort_Out2(Double u);

#define Rte_Invalidate_PPort_Out2      Rte_Invalidate_E2E_PPort_Out2

Std_ReturnType Rte_Invalidate_PPort_Out2(void);

#define E2EPW_WriteInit_PPort_Out2     E2EPW_WriteInit_E2E_PPort_Out2

Std_ReturnType E2EPW_WriteInit_PPort_Out2(void);

/* Entry point functions */
extern FUNC(void, E2E_CODE) untitled_Init(void);
extern FUNC(void, E2E_CODE) untitled_Step(void);

#endif
