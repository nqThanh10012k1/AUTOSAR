/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Feb  4 01:26:32 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"

/* Model step function */
void untitled_Step(void)
{
  float64 tmpRead;

  /* Inport generated from: '<Root>/Bus Element In1' */
  (void)E2EPW_Read_RPort_In2(&tmpRead);

  /* Outport generated from: '<Root>/Bus Element Out1' incorporates:
   *  Gain: '<S1>/Gain'
   */
  (void)E2EPW_Write_PPort_Out2(2.0 * tmpRead);
}

/* Model initialize function */
void untitled_Init(void)
{
  /* End-to-End (E2E) Protection Wrapper initialization */
  E2EPW_ReadInit_RPort_In2();
  E2EPW_WriteInit_PPort_Out2();

  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
