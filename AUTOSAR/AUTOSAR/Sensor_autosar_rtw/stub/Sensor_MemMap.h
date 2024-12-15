/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "Sensor"
   ARXML schema: "R21-11"
   File generated on: "15-Dec-2024 07:03:24"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef Sensor_START_SEC_CODE
#undef Sensor_START_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( Sensor_START_SEC_CONST)
#undef Sensor_START_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( Sensor_START_SEC_VAR)
#undef Sensor_START_SEC_VAR
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef Sensor_STOP_SEC_CODE
#undef Sensor_STOP_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( Sensor_STOP_SEC_CONST)
#undef Sensor_STOP_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( Sensor_STOP_SEC_VAR)
#undef Sensor_STOP_SEC_VAR
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "Sensor_MemMap.h wrong pragma command"
#endif
#endif
