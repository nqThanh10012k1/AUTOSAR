/*
 * File: SlaveSWC.h
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

#ifndef RTW_HEADER_SlaveSWC_h_
#define RTW_HEADER_SlaveSWC_h_
#ifndef SlaveSWC_COMMON_INCLUDES_
#define SlaveSWC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SlaveSWC.h"
#endif                                 /* SlaveSWC_COMMON_INCLUDES_ */

#include "SlaveSWC_types.h"
#include "Rte_Type.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  uint8 OutportBufferForOutport;       /* '<S2>/Constant' */
} ARID_DEF_SlaveSWC_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint8 Constant;                /* '<S2>/Constant' */
} ConstB_SlaveSWC_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_SlaveSWC_T SlaveSWC_ARID_DEF;/* '<S2>/Constant' */
extern const ConstB_SlaveSWC_T SlaveSWC_ConstB;/* constant block i/o */

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
 * '<Root>' : 'SlaveSWC'
 * '<S1>'   : 'SlaveSWC/Function-Call Subsystem'
 * '<S2>'   : 'SlaveSWC/Function-Call Subsystem/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_SlaveSWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
