/*
This program should count from 0-5 on the top line of the
LCD continously every 2 seconds

What one statement must you add to this code to make this happen
*/
#include "mbed.h"
#include "Grove_LCD_RGB_Backlight.h"

Ticker Fred;

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
    lcd.setRGB(0x00,0x00,0xff);
    for(;;)
    {
        while(counter <=5)
        {
          lcd.locate(7,0);
          sprintf(buf,"%d",counter);
          lcd.print(buf);
        }
        counter=0;
    }
}

