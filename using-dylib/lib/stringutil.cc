#include "stringutil.h"

typedef unsigned char uint8_t;

uint8_t b[100] = {0x09, 0xEA, 0x69, 0x98, 0xA4, 0x12, 0x4F, 0xEE, 0xFB, 0xAC, 0xF1, 0x61, 0x7D, 0x2E, 0x93, 0x31, 0x69, 0x37, 0x03, 0xCC, 0xFD, 0x76, 0x8D, 0xCF, 0x87, 0xB0, 0x79, 0x3C, 0x28, 0xA4, 0x48, 0x17, 0xEA, 0x35, 0xEB, 0x35, 0xCD, 0x44, 0x43, 0xCE, 0xE6, 0xC2, 0xE1, 0xE9, 0xF8, 0x81, 0x98, 0x76, 0x5C, 0xCD, 0xF8, 0x4F, 0x5E, 0xF1, 0x70, 0xFF, 0xDA, 0x51, 0x5E, 0xBD, 0xFB, 0x5D, 0xEF, 0xEF, 0x31, 0xCD, 0xEC, 0xD4, 0xFE, 0xFB, 0x43, 0x5A, 0x9B, 0x60, 0x1C, 0x48, 0x85, 0x88, 0x3F, 0x85};

const char *GetLog()
{
  return (const char *)b;
}