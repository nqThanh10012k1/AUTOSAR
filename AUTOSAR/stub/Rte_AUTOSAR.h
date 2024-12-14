/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "AUTOSAR"
   ARXML schema: "R21-11"
   File generated on: "14-Dec-2024 15:41:03"  */

#ifndef Rte_AUTOSAR_h
#define Rte_AUTOSAR_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_RE_Convert_Tempertature_PP_Tmp_Tmp_Value Rte_IWrite_AUTOSAR_RE_Convert_Tempertature_PP_Tmp_Tmp_Value

void Rte_IWrite_RE_Convert_Tempertature_PP_Tmp_Tmp_Value(Double u);

#define Rte_IWriteRef_RE_Convert_Tempertature_PP_Tmp_Tmp_Value Rte_IWriteRef_AUTOSAR_RE_Convert_Tempertature_PP_Tmp_Tmp_Value

Double* Rte_IWriteRef_RE_Convert_Tempertature_PP_Tmp_Tmp_Value(void);

#define Rte_IRead_RE_Receive_AdcValue_RP_Adc_Adc_Value Rte_IRead_AUTOSAR_RE_Receive_AdcValue_RP_Adc_Adc_Value

UInt16 Rte_IRead_RE_Receive_AdcValue_RP_Adc_Adc_Value(void);

/* IRV functions */
#define Rte_IrvIRead_RE_Convert_Tempertature_adc Rte_IrvIRead_AUTOSAR_RE_Convert_Tempertature_adc

UInt16 Rte_IrvIRead_RE_Convert_Tempertature_adc(void);

#define Rte_IrvIWrite_RE_Receive_AdcValue_adc Rte_IrvIWrite_AUTOSAR_RE_Receive_AdcValue_adc

void Rte_IrvIWrite_RE_Receive_AdcValue_adc(UInt16 u);

/* Entry point functions */
extern FUNC(void, AUTOSAR_CODE) RE_Convert_Tempertature(void);
extern FUNC(void, AUTOSAR_CODE) RE_Receive_AdcValue(void);
extern FUNC(void, AUTOSAR_CODE) TempControl_Init(void);

#endif
