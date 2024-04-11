#ifndef ICON_MANAGER_H
#define ICON_MANAGER_H

#include <LiquidCrystal.h>
#include "Icons.h"

class IconManager{
  public:
    static void setupIcons(LiquidCrystal& lcd){
      lcd.createChar(1, arrowRight);
      lcd.createChar(2, arrowLeft);
      lcd.createChar(3, humanIcon);
      lcd.createChar(4, humanRun1);
      lcd.createChar(5, humanRun2);
      lcd.createChar(6, finishRight);
    }
};

#endif // ICON_MANAGER_H
