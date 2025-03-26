#ifndef RTW_HEADER_MasterSWC_h_
#define RTW_HEADER_MasterSWC_h_
#ifndef MasterSWC_COMMON_INCLUDES_
#define MasterSWC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MasterSWC.h"
#endif

#include "MasterSWC_types.h"
#include "Rte_Type.h"

typedef struct {
  const UInt8 Constant;
} ConstB_MasterSWC_T;

extern const ConstB_MasterSWC_T MasterSWC_ConstB;

#endif

