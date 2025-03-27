/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "autosar_swc_counter"
   ARXML schema: "R20-11"
   File generated on: "27-Mar-2025 09:52:18"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef autosar_swc_counter_START_SEC_CODE
#undef autosar_swc_counter_START_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( autosar_swc_counter_START_SEC_VAR)
#undef autosar_swc_counter_START_SEC_VAR
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef autosar_swc_counter_STOP_SEC_CODE
#undef autosar_swc_counter_STOP_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( autosar_swc_counter_STOP_SEC_VAR)
#undef autosar_swc_counter_STOP_SEC_VAR
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "autosar_swc_counter_MemMap.h wrong pragma command"
#endif
#endif
