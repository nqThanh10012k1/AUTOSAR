/*
 * File: E2E_Sender.c
 *
 * Code generated for Simulink model 'E2E_Sender'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Feb  4 03:08:46 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "E2E_Sender.h"

/* Model step function */
void E2E_Sender_MainFunction(void)
{
  /* Outport: '<Root>/Outport' */
  (void)E2EPW_Write_PP_Sender_Data(E2E_Sender_ConstB.Constant);
}

/* Model initialize function */
void E2E_Sender_Init(void)
{
  /* End-to-End (E2E) Protection Wrapper initialization */
  E2EPW_WriteInit_PP_Sender_Data();

  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
