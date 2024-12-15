/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "Hardware"
   ARXML schema: "R21-11"
   File generated on: "15-Dec-2024 07:41:20"  */

#ifndef Rte_Hardware_h
#define Rte_Hardware_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_RE_Hardware_MainFunction_RP_Sensor_Adc_Adc_Value Rte_IWrite_Hardware_RE_Hardware_MainFunction_RP_Sensor_Adc_Adc_Value

void Rte_IWrite_RE_Hardware_MainFunction_RP_Sensor_Adc_Adc_Value(UInt16 u);

#define Rte_IWriteRef_RE_Hardware_MainFunction_RP_Sensor_Adc_Adc_Value Rte_IWriteRef_Hardware_RE_Hardware_MainFunction_RP_Sensor_Adc_Adc_Value

UInt16* Rte_IWriteRef_RE_Hardware_MainFunction_RP_Sensor_Adc_Adc_Value(void);

#define Rte_IRead_RE_Hardware_MainFunction_PP_Sensor_Tmp_Tmp_Value Rte_IRead_Hardware_RE_Hardware_MainFunction_PP_Sensor_Tmp_Tmp_Value

Double Rte_IRead_RE_Hardware_MainFunction_PP_Sensor_Tmp_Tmp_Value(void);

/* Entry point functions */
extern FUNC(void, Hardware_CODE) RE_Hardware_InitFunction(void);
extern FUNC(void, Hardware_CODE) RE_Hardware_MainFunction(void);

#endif
