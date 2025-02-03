/*
 * File: E2E_Receiver.c
 *
 * Code generated for Simulink model 'E2E_Receiver'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Feb  4 03:36:26 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "E2E_Receiver.h"

/* PublicStructure Variables for Internal Data */
ARID_DEF_E2E_Receiver_T E2E_Receiver_ARID_DEF;/* '<Root>/Data Store Memory' */

/* Model step function */
void E2E_Receiver_MainFunction(void)
{
  /* DataStoreWrite: '<Root>/Data Store Write' incorporates:
   *  Inport: '<Root>/Inport'
   */
  (void)Rte_Read_RP_Data_Data(&E2E_Receiver_ARID_DEF.Data);
}

/* Model initialize function */
void E2E_Receiver_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
