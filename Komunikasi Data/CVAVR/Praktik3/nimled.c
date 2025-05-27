#include <mega32.h>
#include <stdio.h>
#include <delay.h>



void main(void)
{                                
//DDRD = 0b11111111; //Menggunakan Biner

while (1)
      {      
       PORTD = 2;
       delay_ms(1000);
       PORTD = 4; 
       delay_ms(1000);
       
       
       PORTD = 1;
       delay_ms(1000);
        
       PORTD = 0;
       delay_ms(1000); //digunakan hanya untuk memberi jeda 
       
       PORTD = 1;
       delay_ms(1000);
        
       
       PORTD = 6;
       delay_ms(1000);
       PORTD = 0;
       delay_ms(1000);
       PORTD = 6;
       delay_ms(1000);
       PORTD = 4;
       delay_ms(1000);   
      }
}
