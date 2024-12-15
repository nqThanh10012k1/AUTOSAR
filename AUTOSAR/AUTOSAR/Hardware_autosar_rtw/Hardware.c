/*
 * File: Hardware.c
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

#include "Hardware.h"
#include "rtwtypes.h"
#include "Hardware_private.h"
#include <math.h>

/* PublicStructure Variables for Internal Data */
ARID_DEF rtARID_DEF;                   /* '<S1>/Random Number' */

/* Static Memory for Internal Data */
float64 rtTmp_Value;                   /* '<S1>/Data Store Memory' */
float64 rt_urand_Upu32_Yd_f_pw(uint32 *u)
{
  uint32 hi;
  uint32 lo;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return (float64)*u * 4.6566128752457969E-10;
}

float64 rt_nrand_Upu32_Yd_f_pw(uint32 *u)
{
  float64 si;
  float64 sr;
  float64 y;

  /* Normal (Gaussian) random number generator */
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = sqrt(-2.0 * log(si) / si) * sr;
  return y;
}

/* Model step function */
void RE_Hardware_MainFunction(void)
{
  uint16 rtb_DataTypeConversion;

  /* Outputs for Atomic SubSystem: '<Root>/Atomic Subsystem' */
  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  Inport: '<Root>/Inport'
   */
  rtTmp_Value = Rte_IRead_RE_Hardware_MainFunction_PP_Sensor_Tmp_Tmp_Value();

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  RandomNumber: '<S1>/Random Number'
   */
  rtb_DataTypeConversion = (uint16)rtARID_DEF.NextOutput;

  /* Update for RandomNumber: '<S1>/Random Number' */
  rtARID_DEF.NextOutput = rt_nrand_Upu32_Yd_f_pw(&rtARID_DEF.RandSeed) *
    2.23606797749979 + 30.0;

  /* End of Outputs for SubSystem: '<Root>/Atomic Subsystem' */

  /* Outport: '<Root>/Outport' */
  Rte_IWrite_RE_Hardware_MainFunction_RP_Sensor_Adc_Adc_Value
    (rtb_DataTypeConversion);
}

/* Model initialize function */
void RE_Hardware_InitFunction(void)
{
  /* SystemInitialize for Atomic SubSystem: '<Root>/Atomic Subsystem' */
  /* InitializeConditions for RandomNumber: '<S1>/Random Number' */
  rtARID_DEF.RandSeed = 1144108930U;
  rtARID_DEF.NextOutput = rt_nrand_Upu32_Yd_f_pw(&rtARID_DEF.RandSeed) *
    2.23606797749979 + 30.0;

  /* End of SystemInitialize for SubSystem: '<Root>/Atomic Subsystem' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
