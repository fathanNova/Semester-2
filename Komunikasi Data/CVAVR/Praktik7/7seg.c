/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 07/05/2025
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

// Data Hexa angka 0-9  
unsigned char number7seg[] = {
    0x3F, // 0
    0x06, // 1
    0x5B, // 2
    0x4F, // 3
    0x66, // 4
    0x6D, // 5
    0x7D, // 6
    0x07, // 7
    0x7F, // 8
    0x6F  // 9
};

int status = 0;   
int _button = 0;
int _reverse = 0;


void number(int number){
    int satuan = number % 10;
    int puluhan = number / 10;

    PORTC = number7seg[satuan];
    PORTA = number7seg[puluhan];
}

void main(void)
{
    int count = 0;

    DDRC = 0b01111111;
    DDRA = 0b01111111; 
    DDRD = 0b00000000;  
    PORTD = 0b00000111;
    
    while (1)
    {
        
        int button = !PIND.0;
        int reverse = !PIND.1;
        int reset = !PIND.2;
         

        // on/off
        if (button && !_button)
        {   
            status = !status; 
            delay_ms(100);    
        }
        _button = button;
         
        // reset tampilan 
        if (reset){
            count = 0;
            delay_ms(100);
        } 
        _reverse = reverse;
         
        //menampilkan angka pada 7 segment
        if (status)
        {    
            number(count);
            if(_reverse){
                count--;
                if(count < 0) count = 99;
            } else {
                count++;
                if(count > 99) count = 0;
            } 
            delay_ms(1000);
        }
    }
}

 
 


