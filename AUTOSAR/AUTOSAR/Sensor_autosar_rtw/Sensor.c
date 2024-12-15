/*
 * File: Sensor.c
 *
 * Code generated for Simulink model 'Sensor'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Dec 15 07:03:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Sensor.h"
#include "rtwtypes.h"

/* Model step function */
void RE_Sensor_MainFunction(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Runnable_10ms' */
  /* Outport: '<Root>/Outport' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/Inport'
   *  Product: '<S1>/Divide'
   */
  Rte_IWrite_RE_Sensor_MainFunction_PP_Sensor_Tmp_Tmp_Value((uint8)
    (Rte_IRead_RE_Sensor_MainFunction_RP_Sensor_Adc_Adc_Value() / 4095U));

  /* End of Outputs for SubSystem: '<Root>/Runnable_10ms' */
}

/* Model initialize function */
void RE_Sensor_InitFunction(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
