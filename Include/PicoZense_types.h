#ifndef PICOZENSE_TYPES_H
#define PICOZENSE_TYPES_H

#include <stdint.h>
#include "PicoZense_enums.h"
#ifdef DCAM_710
#include "DCAM710/PicoZense_types_710.h"
#elif defined DCAM_305
#include "DCAM305/PicoZense_types_305.h"
#elif defined DCAM_800
#include "DCAM800/PicoZense_types_800.h"
#endif

#endif /* PICOZENSE_TYPES_H */
