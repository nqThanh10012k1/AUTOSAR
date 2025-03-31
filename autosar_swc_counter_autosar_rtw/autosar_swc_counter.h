#ifndef RTW_HEADER_autosar_swc_counter_h_
#define RTW_HEADER_autosar_swc_counter_h_
#ifndef autosar_swc_counter_COMMON_INCLUDES_
#define autosar_swc_counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_autosar_swc_counter.h"
#endif

#include "SUMOUT_LOOKUP.h"
#include "Rte_Type.h"

#define autosar_swc_counter_START_SEC_VAR
#include "autosar_swc_counter_MemMap.h"

extern const my_qualifier uint8 INC;

#define autosar_swc_counter_STOP_SEC_VAR
#include "autosar_swc_counter_MemMap.h"

extern SUMOUT_LOOKUP SUMOUT;
extern uint8 LIMIT;
extern uint8 RESET;

#endif

