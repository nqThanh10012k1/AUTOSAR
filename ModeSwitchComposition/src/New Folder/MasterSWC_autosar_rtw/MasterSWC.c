#include "MasterSWC.h"

void MasterSWC_Step(void)
{
  (void)Rte_Switch_MSP_Ecu_Modes_MG_Ecu_Modes(MasterSWC_ConstB.Constant);
}

void MasterSWC_Init(void)
{
  (void)Rte_Switch_MSP_Ecu_Modes_MG_Ecu_Modes(MasterSWC_ConstB.Constant);
}
