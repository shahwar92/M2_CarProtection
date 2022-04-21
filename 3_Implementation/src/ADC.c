/**
 * @file ADC.c
 * @author Shahwar Haider
 * @brief Header file to handle Anolog to digital Peripherals
 * @version 0.1
 * @date 2022-04-20
 * 
 *
 * 
 */
#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif
#include "ADC.h"
#include<avr/io.h>
#include<util/delay.h>
/**
 * @brief Initialize Anolog to Digital Converter
 * 
 *
 * 
 */

void InitADC()
{
    /*AVcc = +5V = Vref*/
    ADMUX = (1<<REFS0);
    /* Enable ADC by setting its value to 1 and set Prescaler to 2 */
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
/**
 * @brief Read input from ADC 
 * @param ch slecting channel
 *
 * 
 */
uint16_t ReadADC(uint8_t ch)
{
     /*Select ADC Channel: must be 0-7*/
    ADMUX = (ADMUX & 0xF0) | (ch & 0x0F);
 /* Single conversion mode */
    ADCSRA |= (1<<ADSC);
 /* We have to wait until it is done */
    while( ADCSRA & (1<<ADSC) );
     return ADC;
}
