/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "autosar_swc_counter"
   ARXML schema: "R20-11"
   File generated on: "28-Mar-2025 05:09:50"  */

#include "Rte_autosar_swc_counter.h"

/* Parameters */
uint8 Rte_CData_AMP_data = 2U;
uint8 Rte_CData_AMP(void)
{
  return Rte_CData_AMP_data;
}

uint8 Rte_CData_K_data;
uint8 Rte_CData_K(void)
{
  return Rte_CData_K_data;
}

/* AR-Typed Per Instance Memories */
uint8 Rte_Pim_autosar_swc_co_UnitDelay_DSTATE_data;
uint8* Rte_Pim_autosar_swc_co_UnitDelay_DSTATE(void)
{
  return &Rte_Pim_autosar_swc_co_UnitDelay_DSTATE_data;
}
