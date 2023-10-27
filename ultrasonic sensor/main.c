#include "ultrasonic.h"
#include "lcd.h"
#include <util/delay.h>
#include <avr/io.h> /* To use the SREG register */

int main(void)
{
 uint16 distance = 0;
 /* Enable Global Interrupt I-Bit */
 SREG |= (1<<7);
 /* Initialization for Ultrasonic driver */
 Ultrasonic_init();
 /* Initialize the LCD driver */
 LCD_init();
 LCD_moveCursor(1,0);
 LCD_displayString("Distance=    cm");

 while(1)
 {
  distance=Ultrasonic_readDistance();
  LCD_moveCursor(1,10);
  if(distance<100)
  {
   LCD_intgerToString(distance);
   LCD_displayCharacter(' ');
  }
  else
  {
   LCD_intgerToString(distance);
  }
 }
}
