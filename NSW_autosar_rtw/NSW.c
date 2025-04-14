#include "NSW.h"
#include "rtwtypes.h"

uint8 NSW_NV_Data;
void RE_NSW_MainFunction(void)
{
    sint32 tmp;
    NSW_NV_Data = *Rte_Pim_NSW_Nv_Block();
    tmp = (sint32)(NSW_NV_Data + 1U);
    if (NSW_NV_Data + 1U > 255U)
    {
        tmp = 255;
    }

    *Rte_Pim_NSW_Nv_Block() = (uint8)tmp;
}

void NSW_Init(void)
{
}
