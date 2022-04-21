#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include<stdio.h>
#include<util/delay.h>
#include "ADC.h"

int main(void)
{
    TCCR0A |= (1<<COM0A0) | (1<<WGM00) | (1<<WGM01);
    TCCR0B |= (1<<CS00) | (1<<CS01);
    InitADC();
    uint16_t temp;
    while (1)
    {
        temp=ReadADC(0);
        _delay_ms(200);
    }
    
    if (temp >=00000001)
    {
    /* Selecting the direction of data i.e. taking output*/
    DDRD |=(1<<PD6);

    while (1)
    {
        OCR0A = 10;
        _delay_ms(100);
        OCR0A = 100;
        _delay_ms(100);
        OCR0A = 200;
        _delay_ms(100);
        OCR0A = 200;
        _delay_ms(100);
        OCR0A = 200;
        _delay_ms(100);
        OCR0A = 256;
        _delay_ms(100);
    }
    }
    return 0;
}
