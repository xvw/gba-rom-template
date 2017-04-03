#ifndef GBA_HELPER_H
#define GBA_HELPER_H

/* Alias for more conveinent usage */
typedef unsigned char   u8;
typedef unsigned short  u16;
typedef unsigned int    u32;
typedef u16             COLOR;

/* Information about the device */
#define SCREEN_WIDTH    240
#define SCREEN_HEIGHT   160

#define REG_DISPLAYCONTROL *((volatile u32*)(0x04000000))

#define VIDEO_MODE_0 0x0000
#define VIDEO_MODE_1 0x0001
#define VIDEO_MODE_2 0x0002
#define VIDEO_MODE_3 0x0003
#define VIDEO_MODE_4 0x0004
#define VIDEO_MODE_5 0x0005

#define BG_MODE_0 0x0100
#define BG_MODE_1 0x0200
#define BG_MODE_2 0x0400
#define BG_MODE_3 0x0800


#define SCREEN ((volatile u16*)0x06000000)

/* Define a color with RGB values */
static inline COLOR RGB(u32 red, u32 green, u32 blue) {   
  return red | (green<<5) | (blue<<10);   
}

#endif