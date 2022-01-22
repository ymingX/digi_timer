﻿
#ifndef __BMP_H
#define __BMP_H
#include <msp430f5529.h>

unsigned char moon[] = {//16x16
                        0x00,0x00,0x08,0x14,0x14,0x12,0x22,0xC2,0x02,0x04,0x04,0x08,0x10,0xE0,0x00,0x00,
                        0x00,0x00,0x00,0x00,0x10,0x30,0x30,0x2C,0x23,0x20,0x10,0x10,0x0C,0x07,0x00,0x00,
};

unsigned char sun[] = {//16x16
                       0xE0,0x10,0x0C,0x04,0x02,0x01,0x01,0x01,0x01,0x01,0x01,0x02,0x04,0x0C,0x30,0xC0,
                       0x07,0x08,0x30,0x20,0x40,0x40,0x80,0x80,0x80,0x80,0x40,0x40,0x20,0x30,0x0C,0x03
};
unsigned char test[] = {//42 x 32
                        0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF0,0xF8,0xFC,0xFC,0x3C,0x3C,0x3C,0x3C,0x3C,
                        0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x1C,
                        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1E,0x3F,0x7F,0xFF,
                        0xFF,0xFF,0xFF,0xFF,0xED,0x80,0x00,0x0C,0x1C,0x7C,0xFC,0xCC,0x0C,0x0C,0xFC,0xFC,
                        0x0C,0x0C,0xEC,0xFC,0x3C,0x1C,0x00,0x80,0xD8,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0x7C,
                        0x3C,0x1C,0x0C,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x1F,0x3F,
                        0x7F,0xFE,0xFC,0xF8,0xF1,0xF3,0xC0,0x80,0x3F,0xBF,0xC0,0xC0,0xF7,0xF9,0xFC,0xFE,
                        0xFF,0x7F,0x3F,0x1F,0x0F,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x1F,
                        0x1F,0x3F,0x7F,0x7F,0x3F,0x1F,0x1F,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
                        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"D:\ELC\2023届培训\单片机\单片机培训资料2021\屏幕和按键资料和驱动代码\PCtoLCD2002完美版\GEM.bmp",0*/


};
unsigned char clouds[] = {/* (98 X 23 )*/
                          0x00,0x00,0x00,0x00,0x80,0xC0,0xF8,0xF8,0xFC,0x84,0x04,0x0C,0x0E,0x1F,0x13,0x01,
                          0x03,0x0E,0x84,0x86,0x02,0x06,0x3C,0x3C,0x18,0x08,0x08,0x18,0xF0,0x00,0x00,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x64,0xC7,0x83,0x81,0x81,0x81,0x41,0x41,0xBF,
                          0xC3,0x82,0x82,0x62,0x6A,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xC0,0x40,
                          0xC0,0xC0,0xC0,0x60,0x30,0xB0,0xB0,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x1F,0x3F,0x78,0x61,0xE1,0xC1,0x80,0x88,0x8C,0x88,0xC8,
                          0x8C,0x20,0x20,0x38,0x9E,0xCF,0xE0,0x80,0xC0,0xC0,0x78,0x38,0x3A,0x1B,0x1F,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,
                          0x01,0x01,0x00,0x00,0x80,0xC0,0x40,0x40,0xE0,0xF8,0x08,0x18,0x1C,0x1C,0x1C,0x0E,
                          0x0A,0x0A,0x0B,0x82,0x82,0x83,0x87,0xC3,0xE2,0x42,0x06,0x0C,0x07,0x06,0x06,0x86,
                          0xE6,0xFC,0x78,0x70,0xE0,0x00,0x0C,0x0C,0x07,0xC7,0xC0,0x00,0x07,0x04,0x04,0x04,
                          0x7C,0xF0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,
                          0x01,0x01,0x01,0x03,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                          0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                          0x00,0x04,0x0E,0x0E,0x0F,0x0F,0x05,0x04,0x04,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
                          0x0C,0x0C,0x0C,0x0C,0x0D,0x0D,0x0D,0x0D,0x0D,0x0C,0x0C,0x0C,0x0C,0x0C,0x1C,0x0C,
                          0x0C,0x0F,0x0F,0x0C,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0D,0x0F,0x0F,0x08,0x0C,
                          0x0C,0x08,0x0C,0x0C,0x0F,0x0F
};

#endif
