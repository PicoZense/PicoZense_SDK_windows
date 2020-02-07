#ifndef PICOZENSE_API2_H
#define PICOZENSE_API2_H
/**
* @file picozense_api2.h
* @brief Pico Zense API header file.
* Copyright (c) 2018-2019 Pico Interactive, Inc.
*/

/*! \mainpage Pico Zense API Documentation
*
* \section intro_sec Introduction
*
* Welcome to the Pico Zense API documentation. This documentation enables you to quickly get started in your development efforts to programmatically interact with the Pico Zense TOF RGBD Camera (DCAM710).
*/

#include "PicoZense_decmtype.h"
 
#ifdef DCAM_710
#include "DCAM710/PicoZense_api_710.h"
#elif defined DCAM_305
#include "DCAM305/PicoZense_api_305.h"
#elif defined DCAM_800
#include "DCAM800/PicoZense_api_800.h"
#endif

#endif /* PICOZENSE_API2_H */
