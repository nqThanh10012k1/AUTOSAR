#include "autosar_swc_counter.h"

#define autosar_swc_counter_START_SEC_VAR
#include "autosar_swc_counter_MemMap.h"

const my_qualifier uint8 INC = 1U;

#define autosar_swc_counter_STOP_SEC_VAR
#include "autosar_swc_counter_MemMap.h"

SUMOUT_LOOKUP SUMOUT =
{
   {
      1U, 2U, 3U, 4U, 5U, 6U
   },

   {
      11U, 12U, 13U, 14U, 15U, 16U
   }
} ;

uint8 LIMIT = 5U;
uint8 RESET = 0U;
