#include "rustTypes.h"

#ifndef _IMAGE_TYPE
#define _IMAGE_TYPE 1

typedef struct pixel
{
    u8 r;
    u8 g;
    u8 b;
} pixel;
typedef struct image
{
    u16 width;
    u16 height;
    pixel *pixels;
} image;

#endif