/*
 * File: Hardware.h
 *
 * Code generated for Simulink model 'Hardware'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Dec 15 07:41:02 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Hardware_h_
#define RTW_HEADER_Hardware_h_
#ifndef Hardware_COMMON_INCLUDES_
#define Hardware_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_Hardware.h"
#endif                                 /* Hardware_COMMON_INCLUDES_ */

#include "Hardware_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  float64 NextOutput;                  /* '<S1>/Random Number' */
  uint32 RandSeed;                     /* '<S1>/Random Number' */
} ARID_DEF;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF rtARID_DEF;            /* '<S1>/Random Number' */

/* Static Memory for Internal Data */
extern float64 rtTmp_Value;            /* '<S1>/Data Store Memory' */

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
 * '<Root>' : 'Hardware'
 * '<S1>'   : 'Hardware/Atomic Subsystem'
 */

/*-
 * Requirements for '<Root>': Hardware

 */
#endif                                 /* RTW_HEADER_Hardware_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
