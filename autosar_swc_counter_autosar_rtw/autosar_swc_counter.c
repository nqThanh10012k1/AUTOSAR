#include "autosar_swc_counter.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"

ARID_DEF_autosar_swc_counter autosar_swc_counter_ARID_DEF;

#define autosar_swc_counter_START_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

void Runnable_Step(void)
{
   boolean rtb_RelOpt;
   *Rte_Pim_autosar_swc_co_UnitDelay_DSTATE() = (uint8)((uint32)INC +
      *Rte_Pim_autosar_swc_co_UnitDelay_DSTATE());
   rtb_RelOpt = (*Rte_Pim_autosar_swc_co_UnitDelay_DSTATE() != 16);
   if (rtb_RelOpt && (autosar_swc_counter_ARID_DEF.Amplifier_Trig_ZCE !=
                      POS_ZCSIG))
   {
      autosar_swc_counter_ARID_DEF.Gain = Rte_CData_AMP() *
         Rte_IRead_Runnable_Step_RPort_InData();
   }

   autosar_swc_counter_ARID_DEF.Amplifier_Trig_ZCE = rtb_RelOpt;
   Rte_IWrite_Runnable_Step_SPort_OutData(autosar_swc_counter_ARID_DEF.Gain);
   if (!rtb_RelOpt)
   {
      *Rte_Pim_autosar_swc_co_UnitDelay_DSTATE() = 0U;
   }
}

#define autosar_swc_counter_STOP_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

#define autosar_swc_counter_START_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

void Runnable_Init(void)
{
   autosar_swc_counter_ARID_DEF.Amplifier_Trig_ZCE = POS_ZCSIG;
}

#define autosar_swc_counter_STOP_SEC_CODE
#include "autosar_swc_counter_MemMap.h"

