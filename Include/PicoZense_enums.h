#ifndef PICOZENSE_ENUMS_H
#define PICOZENSE_ENUMS_H

#include "PicoZense_decmtype.h"

#ifdef DCAM_710
#include "DCAM710/PicoZense_enums_710.h"
#elif defined DCAM_305
#include "DCAM305/PicoZense_enums_305.h"
#elif defined DCAM_800
#include "DCAM800/PicoZense_enums_800.h"
#endif

#endif /* PICOZENSE_ENUMS_H */
