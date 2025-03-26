/*
 * File: SlaveSWC.c
 *
 * Code generated for Simulink model 'SlaveSWC'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Wed Mar 26 06:28:49 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SlaveSWC.h"

/* PublicStructure Variables for Internal Data */
ARID_DEF_SlaveSWC_T SlaveSWC_ARID_DEF; /* '<S2>/Constant' */

/* Model step function for TID1 */

/* SwAddrMethod CODE for Runnable */
#define SlaveSWC_START_SEC_CODE
#include "SlaveSWC_MemMap.h"

void SlaveSWC_Step(void)               /* Explicit Task: Inport */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Inport' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  /* RelationalOperator: '<S1>/Relational Operator' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/Inport1'
   */
  if (Rte_Mode_MRP_Ecu_Modes_MG_Ecu_Modes() == RTE_MODE_Ecu_Modes_RUN) {
    /* SignalConversion generated from: '<S2>/Outport' */
    SlaveSWC_ARID_DEF.OutportBufferForOutport = SlaveSWC_ConstB.Constant;
  }

  /* End of RelationalOperator: '<S1>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Inport' */

  /* Outport: '<Root>/Outport' */
  Rte_IWrite_SlaveSWC_Step_Outport_Outport
    (SlaveSWC_ARID_DEF.OutportBufferForOutport);
}

#define SlaveSWC_STOP_SEC_CODE
#include "SlaveSWC_MemMap.h"

/* Model initialize function */

/* SwAddrMethod CODE for Runnable */
#define SlaveSWC_START_SEC_CODE
#include "SlaveSWC_MemMap.h"

void SlaveSWC_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Inport' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S2>/Outport' */
  SlaveSWC_ARID_DEF.OutportBufferForOutport = SlaveSWC_ConstB.Constant;

  /* End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem' */
  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Inport' */

  /* SystemInitialize for Outport: '<Root>/Outport' */
  Rte_IWrite_SlaveSWC_Init_Outport_Outport
    (SlaveSWC_ARID_DEF.OutportBufferForOutport);
}

#define SlaveSWC_STOP_SEC_CODE
#include "SlaveSWC_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
