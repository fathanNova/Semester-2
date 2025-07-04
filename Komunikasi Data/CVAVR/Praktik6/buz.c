/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 05/05/2025
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
int i;

void nol(void){
  for( i = 0; i < 100; i++)
  {
  PORTC = 0b00111111; 
  PORTD = 0;
  delay_us(2024);
  PORTD = 1;
  delay_us(2024);
  }
}

void satu(void){
  for( i = 0; i < 100; i++)
  {
  PORTC = 0b00000110; 
  PORTD = 0;
  delay_us(1912);
  PORTD = 1;
  delay_us(1912);
  }
}

 void dua(void){
 for( i = 0; i < 100; i++)
 { 
  PORTC = 0b01011011;
  PORTD = 0;
  delay_us(1703);
  PORTD = 1;
  delay_us(1703);
  }
}

void empat(void){
  for( i = 0; i < 100; i++)
  {
  PORTC = 0b01100110; 
  PORTD = 0;
  delay_us(1432);
  PORTD = 1;
  delay_us(1432);
  }
}

void enam(void){
  for( i = 0; i < 100; i++)
  {
  PORTC = 0b01111101; 
  PORTD = 0;
  delay_us(1136);
  PORTD = 1;
  delay_us(1136);
  }
}

void main(void)
{


while (1)
      {  
      DDRC = 0b11111111;
      //nim = 24 11 6064  

        dua(); 
        delay_ms(1000);
        
        empat();
        delay_ms(1000);
        
        satu();
        delay_ms(1000);
        
        satu();
        delay_ms(1000);
        
        enam();
        delay_ms(1000);
        
        nol();
        delay_ms(1000);
        
        enam();
        delay_ms(1000);
        
        empat();
        delay_ms(1000);
                
      }
}
