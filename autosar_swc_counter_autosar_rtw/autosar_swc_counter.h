/*
 * File: autosar_swc_counter.h
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

#ifndef RTW_HEADER_autosar_swc_counter_h_
#define RTW_HEADER_autosar_swc_counter_h_
#ifndef autosar_swc_counter_COMMON_INCLUDES_
#define autosar_swc_counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_autosar_swc_counter.h"
#endif                                /* autosar_swc_counter_COMMON_INCLUDES_ */

#include "Rte_Type.h"
#include "zero_crossing_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  sint32 Gain;                         /* '<S1>/Gain' */
  ZCSigState Amplifier_Trig_ZCE;       /* '<Root>/Amplifier' */
} ARID_DEF_autosar_swc_counter;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_autosar_swc_counter autosar_swc_counter_ARID_DEF;/* '<S1>/Gain' */

/* Static Memory for Internal Data */
extern uint8 SM_X;                     /* '<Root>/X' */

/* Constant memory autosar model workspace parameters */

/* SwAddrMethod VAR for Internal Data */
#define autosar_swc_counter_START_SEC_VAR
#include "autosar_swc_counter_MemMap.h"

extern const my_qualifier uint8 INC;   /* Variable: INC
                                        * Referenced by: '<Root>/INC'
                                        */

#define autosar_swc_counter_STOP_SEC_VAR
#include "autosar_swc_counter_MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'autosar_swc_counter'
 * '<S1>'   : 'autosar_swc_counter/Amplifier'
 */
#endif                                 /* RTW_HEADER_autosar_swc_counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
