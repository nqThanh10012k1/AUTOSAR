/*
 * File: autosar_swc_counter.c
 *
 * Code generated for Simulink model 'autosar_swc_counter'.
 *
 * Model version                  : 8.0
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Thu Mar 27 09:52:11 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "autosar_swc_counter.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"

/* PublicStructure Variables for Internal Data */
ARID_DEF_autosar_swc_counter autosar_swc_counter_ARID_DEF;/* '<S1>/Gain' */

/* Static Memory for Internal Data */
uint8 SM_X;                            /* '<Root>/X' */

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define autosar_swc_counter_START_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

void Runnable_Step(void)
{
  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/INC'
   *  UnitDelay: '<Root>/X'
   *
   * Block description for '<Root>/INC':
   *  This block references an AUTOSAR calibration parameter, which is
   *  accessed using the AUTOSAR Rte_Calprm function signature.
   */
  *Rte_Pim_PIM_sum_out() = (uint8)((uint32)INC + SM_X);

  /* RelationalOperator: '<Root>/RelOpt' incorporates:
   *  Constant: '<Root>/LIMIT'
   *
   * Block description for '<Root>/LIMIT':
   *  This block references an AUTOSAR calibration parameter, which is
   *  accessed using the AUTOSAR Rte_Calprm function signature.
   */
  *Rte_Pim_SM_equal_to_count() = (*Rte_Pim_PIM_sum_out() != 16);

  /* Outputs for Triggered SubSystem: '<Root>/Amplifier' incorporates:
   *  TriggerPort: '<S1>/Trigger'
   */
  if ((*Rte_Pim_SM_equal_to_count()) &&
      (autosar_swc_counter_ARID_DEF.Amplifier_Trig_ZCE != POS_ZCSIG)) {
    /* Gain: '<S1>/Gain' incorporates:
     *  Inport: '<Root>/Input'
     *
     * Block description for '<S1>/Gain':
     *  This block references an AUTOSAR calibration parameter, which is
     *  accessed using the AUTOSAR Rte_Calprm function signature.
     */
    autosar_swc_counter_ARID_DEF.Gain = Rte_CData_K() *
      Rte_IRead_Runnable_Step_RPort_InData();
  }

  autosar_swc_counter_ARID_DEF.Amplifier_Trig_ZCE = *Rte_Pim_SM_equal_to_count();

  /* End of Outputs for SubSystem: '<Root>/Amplifier' */

  /* Outport: '<Root>/Output' */
  Rte_IWrite_Runnable_Step_SPort_OutData(autosar_swc_counter_ARID_DEF.Gain);

  /* Switch: '<Root>/Switch' */
  if (*Rte_Pim_SM_equal_to_count()) {
    /* Switch: '<Root>/Switch' */
    *Rte_Pim_autosar_swc_counter_switch_out() = *Rte_Pim_PIM_sum_out();
  } else {
    /* Switch: '<Root>/Switch' incorporates:
     *  Constant: '<Root>/RESET'
     *
     * Block description for '<Root>/RESET':
     *  This block references an AUTOSAR calibration parameter, which is
     *  accessed using the AUTOSAR Rte_Calprm function signature.
     */
    *Rte_Pim_autosar_swc_counter_switch_out() = 0U;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Update for UnitDelay: '<Root>/X' */
  SM_X = *Rte_Pim_autosar_swc_counter_switch_out();
}

#define autosar_swc_counter_STOP_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

/* Model initialize function */

/* SwAddrMethod CODE for Runnable */
#define autosar_swc_counter_START_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

void Runnable_Init(void)
{
  autosar_swc_counter_ARID_DEF.Amplifier_Trig_ZCE = POS_ZCSIG;
}

#define autosar_swc_counter_STOP_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
