/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "Hardware"
   ARXML schema: "R21-11"
   File generated on: "15-Dec-2024 07:41:20"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef Hardware_START_SEC_CODE
#undef Hardware_START_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( Hardware_START_SEC_CONST)
#undef Hardware_START_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( Hardware_START_SEC_VAR)
#undef Hardware_START_SEC_VAR
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef Hardware_STOP_SEC_CODE
#undef Hardware_STOP_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( Hardware_STOP_SEC_CONST)
#undef Hardware_STOP_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( Hardware_STOP_SEC_VAR)
#undef Hardware_STOP_SEC_VAR
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "Hardware_MemMap.h wrong pragma command"
#endif
#endif
