/*
This program should count from 0-8 on the top line of the
LCD every time there is a Falling EDGE on SW2

What one statement must you add to this code to make this happen
*/
#include "mbed.h"
#include "Grove_LCD_RGB_Backlight.h"


InterruptIn gail(SW2);


short counter=0;
char buf[4];

void count(void)
{
    counter++;
}

Grove_LCD_RGB_Backlight lcd(D14,D15);

int main(void)
{
                                     // YOUR STATEMENT goes on THIS LINE
    lcd.clear();
    lcd.setRGB(0xFF,0xFF,0xff);
    for(;;)
    {
        while(counter <=8)
        {
          lcd.locate(7,0);
          sprintf(buf,"%d",counter);
          lcd.print(buf);
        }
        counter=0;
    }
}

