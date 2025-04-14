/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "NSW"
   ARXML schema: "R21-11"
   File generated on: "14-Apr-2025 07:18:48"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef NSW_START_SEC_CODE
#undef NSW_START_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( NSW_START_SEC_CONST)
#undef NSW_START_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( NSW_START_SEC_VAR)
#undef NSW_START_SEC_VAR
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef NSW_STOP_SEC_CODE
#undef NSW_STOP_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( NSW_STOP_SEC_CONST)
#undef NSW_STOP_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( NSW_STOP_SEC_VAR)
#undef NSW_STOP_SEC_VAR
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "NSW_MemMap.h wrong pragma command"
#endif
#endif
