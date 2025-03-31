#include "autosar_swc_counter.h"
#include "rtwtypes.h"
#include "SUMOUT_LOOKUP.h"
#include "look1_iu8lu64n56_binlcse.h"
#ifndef PORTABLE_WORDSIZES
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#endif

#define autosar_swc_counter_START_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

void Runnable_Step(void)
{
   *Rte_Pim_autosar_swc_co_UnitDelay_DSTATE() = (uint8)((uint32)INC +
      *Rte_Pim_autosar_swc_co_UnitDelay_DSTATE());
   Rte_IWrite_Runnable_Step_Lookup_Lookup(look1_iu8lu64n56_binlcse
      (*Rte_Pim_autosar_swc_co_UnitDelay_DSTATE(), SUMOUT.BP1, SUMOUT.Table, 5U));
   if (*Rte_Pim_autosar_swc_co_UnitDelay_DSTATE() == LIMIT)
   {
      *Rte_Pim_autosar_swc_co_UnitDelay_DSTATE() = RESET;
   }
}

#define autosar_swc_counter_STOP_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

#define autosar_swc_counter_START_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

void Runnable_Init(void)
{
}

#define autosar_swc_counter_STOP_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

