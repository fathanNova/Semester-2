/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 27/04/2025
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 12,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32.h>
#include <delay.h>
#include <alcd.h>

// Declare your global variables here
 
void main(void)
{
  char i;

// Alphanumeric LCD initialization
// Connections are specified in the
// Project|Configure|C Compiler|Libraries|Alphanumeric LCD menu:
// RS - PORTC Bit 4
// RD - PORTB Bit 2
// EN - PORTA Bit 2
// D4 - PORTB Bit 0
// D5 - PORTD Bit 6
// D6 - PORTC Bit 1
// D7 - PORTA Bit 0
// Characters/line: 16
lcd_init(16);


while (1)
      {   
      //PORTD = 0b11111111;
      for( i = 0; i < 13; i++)
          {
          lcd_clear();      
          lcd_gotoxy(i,0);
          lcd_putsf("Nova");
          delay_ms(50);

        }   
      }
}
