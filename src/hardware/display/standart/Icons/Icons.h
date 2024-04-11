#ifndef ICONS_H
#define ICONS_H

#include <LiquidCrystal.h>

static byte humanIcon[8] = {
  B01110,
  B01110,
  B00100,
  B01110,
  B10101,
  B00100,
  B01110,
  B10001
};

static byte humanRun1[8] = {
  B00000,
  B01110,
  B01101,
  B00110,
  B11110,
  B01110,
  B10010,
  B00000
};

static byte humanRun2[8] = {
  B00000,
  B01110,
  B01101,
  B00110,
  B11110,
  B01110,
  B01100,
  B00000,
};

static byte arrowRight[8] = {
  B10000,
  B11000,
  B11100,
  B11110,
  B11110,
  B11100,
  B11000,
  B10000
};

static byte arrowLeft[8] = {
  B00001,
  B00011,
  B00111,
  B01111,
  B01111,
  B00111,
  B00011,
  B00001
};

static byte finishRight[8] = {
  B01100,
  B01100,
  B00011,
  B00011,
  B01100,
  B01100,
  B00011,
  B00011
};
#endif // ICONS_H
