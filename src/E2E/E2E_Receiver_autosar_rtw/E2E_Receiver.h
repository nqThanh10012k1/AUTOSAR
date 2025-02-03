/*
 * File: E2E_Receiver.h
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

#ifndef RTW_HEADER_E2E_Receiver_h_
#define RTW_HEADER_E2E_Receiver_h_
#ifndef E2E_Receiver_COMMON_INCLUDES_
#define E2E_Receiver_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_E2E_Receiver.h"
#endif                                 /* E2E_Receiver_COMMON_INCLUDES_ */

#include "E2E_Receiver_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  uint8 Data;                          /* '<Root>/Data Store Memory' */
} ARID_DEF_E2E_Receiver_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_E2E_Receiver_T E2E_Receiver_ARID_DEF;/* '<Root>/Data Store Memory' */

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
 * '<Root>' : 'E2E_Receiver'
 */
#endif                                 /* RTW_HEADER_E2E_Receiver_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
