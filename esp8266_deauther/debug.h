/*
   Copyright (c) 2020 Stefan Kremser
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/esp8266_deauther
 */

#pragma once

#include "config.h"

#include <climits>   // LONG_MAX
#include <Arduino.h> // Serial

#ifdef ENABLE_DEBUG

#define debug_init()\
    DEBUG_PORT.begin(DEBUG_BAUD);\
    DEBUG_PORT.setTimeout(LONG_MAX);\
    DEBUG_PORT.println();

#define debug(...) DEBUG_PORT.print(__VA_ARGS__)
#define debugln(...) DEBUG_PORT.println(__VA_ARGS__)
#define debugf(...) DEBUG_PORT.printf(__VA_ARGS__)

#else /* ifdef ENABLE_DEBUG */

#define debug_init() 0

#define debug(...) 0
#define debugln(...) 0
#define debugf(...) 0

#endif /* ifdef ENABLE_DEBUG */