/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "NSW"
   ARXML schema: "R21-11"
   File generated on: "13-Apr-2025 23:47:59"  */

#include "Rte_NSW.h"

/* AR-Typed Per Instance Memories */
UInt8 Rte_Pim_NSW_Nv_Block_data;
UInt8* Rte_Pim_NSW_Nv_Block(void)
{
  return &Rte_Pim_NSW_Nv_Block_data;
}
