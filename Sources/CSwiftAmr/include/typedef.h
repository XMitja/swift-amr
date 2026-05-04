/*
 * ===================================================================
 *  TS 26.104
 *  REL-5 V5.4.0 2004-03
 *  REL-6 V6.1.0 2004-03
 *  3GPP AMR Floating-point Speech Codec
 * ===================================================================
 *
 */
/* This is valid for PC */

#ifndef _TYPEDEF_H
#define _TYPEDEF_H

#ifdef __GNUC__
#include <inttypes.h>
#endif

#ifdef _WIN32
typedef signed __int8     int8_t;
typedef signed __int16    int16_t;
typedef signed __int32    int32_t;
typedef unsigned __int8   uint8_t;
typedef unsigned __int16  uint16_t;
typedef unsigned __int32  uint32_t;
#endif

typedef int8_t Word8;
typedef uint8_t UWord8;
typedef int16_t Word16;
typedef int32_t Word32;
typedef float Float32;
typedef double Float64;

#endif
