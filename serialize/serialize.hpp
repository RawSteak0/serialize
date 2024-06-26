#pragma once
#include <unordered_map>
#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
//only for this file, so things don't crash for 32-bit systems
#define size_t uint32_t

is is_big_endian(void){
    union {
        uint32_t i;
        char c[4];
    } e = { 0x01000000 };
    return e.c[0];
}

class SizedBlock{
public:
  void* contents_native;
  uint16_t element_span;
  size_t span;

  
};

#undef size_t

