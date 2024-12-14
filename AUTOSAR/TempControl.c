/*
 * File: TempControl.c
 *
 * Code generated for Simulink model 'TempControl'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sat Dec 14 15:40:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "TempControl.h"
#include "rtwtypes.h"

/* Model step function for TID1 */
void RE_Receive_AdcValue(void)         /* Explicit Task: Inport */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Inport' incorporates:
   *  SubSystem: '<Root>/RE_Receive_AdcValue'
   */

  /* DataTransferBlock generated from: '<Root>/RE_Receive_AdcValue' incorporates:
   *  Inport: '<Root>/Inport1'
   *  SignalConversion generated from: '<S2>/Inport'
   */
  Rte_IrvIWrite_RE_Receive_AdcValue_adc
    (Rte_IRead_RE_Receive_AdcValue_RP_Adc_Adc_Value());

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Inport' */
}

/* Model step function for TID2 */
void RE_Convert_Tempertature(void)     /* Explicit Task: Inport2 */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Inport2' incorporates:
   *  SubSystem: '<Root>/RE_Convert_AdcValue'
   */

  /* Outport: '<Root>/Outport' incorporates:
   *  Constant: '<S1>/Constant'
   *  DataTransferBlock generated from: '<Root>/RE_Receive_AdcValue'
   *  Product: '<S1>/Divide'
   */
  Rte_IWrite_RE_Convert_Tempertature_PP_Tmp_Tmp_Value((float64)
    Rte_IrvIRead_RE_Convert_Tempertature_adc() / 4095.0);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Inport2' */
}

/* Model initialize function */
void TempControl_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
