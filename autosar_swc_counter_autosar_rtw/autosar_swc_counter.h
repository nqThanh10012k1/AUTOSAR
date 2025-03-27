#ifndef RTW_HEADER_autosar_swc_counter_h_
#define RTW_HEADER_autosar_swc_counter_h_
#ifndef autosar_swc_counter_COMMON_INCLUDES_
#define autosar_swc_counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_autosar_swc_counter.h"
#endif

#include "Rte_Type.h"
#include "zero_crossing_types.h"

typedef struct
{
   sint32 Gain;
   ZCSigState Amplifier_Trig_ZCE;
}
ARID_DEF_autosar_swc_counter;

extern ARID_DEF_autosar_swc_counter autosar_swc_counter_ARID_DEF;

#define autosar_swc_counter_START_SEC_VAR
#include "autosar_swc_counter_MemMap.h"

extern const my_qualifier uint8 INC;

#define autosar_swc_counter_STOP_SEC_VAR
#include "autosar_swc_counter_MemMap.h"
#endif

