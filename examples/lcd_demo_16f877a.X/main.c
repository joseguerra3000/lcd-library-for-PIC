/*
 * File:   main.c
 * Author: jose
 *
 * Created on July 5, 2020, 10:01 AM
 */

// PIC16F877A Configuration Bit Settings
// 'C' source line config statements
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <stdint.h>
#include <stdio.h> // para utilizar printf
#include "device_config.h" // para la macro _XTAL_FREQ, necesaria para utilizar las macros __delay_xx
#include "lcd.h"

void putchar( char x ){ // esto es para poder utilizar printf con el LCD
  LCD_PrintChar(x);
}

void main(void){
  
  ADCON1bits.PCFG = 0b0110;
  LCD_Initialize(2, 16);  
  
  uint8_t cnt = 0;
  
  while(1){
    LCD_Clear();
    __delay_ms(10);
    
    LCD_PrintString( "Hello World!!!" );
    LCD_SetCursorPosition(1, 5);
    printf( "%d", cnt );
    cnt++;
    LCD_ReturnHome(); // regresar a la posicion 0,0 
    __delay_ms(1);
    LCD_PrintString("Mover pantalla");
    LCD_DisplayShiftRight();
    __delay_ms(500);
    LCD_DisplayShiftRight();
    __delay_ms(500);
    LCD_DisplayShiftRight();
    __delay_ms(500);
    
    LCD_DisplayShiftLeft();
    __delay_ms(500);
    LCD_DisplayShiftLeft();
    __delay_ms(500);
    LCD_DisplayShiftLeft();
    __delay_ms(500);

    
    LCD_Clear();
    __delay_ms(2);
    printf( "Mostar cursor" );
    
    LCD_CommandWrite( LCD_CMD_DISPLAY_ON_CURSOR_BLINK );
    __delay_ms(1000);

    LCD_CommandWrite( LCD_CMD_DISPLAY_ON_CURSOR_ON );
    __delay_ms(1000);
    
    LCD_Clear();
    __delay_ms(2);
    printf( "Mover cursor" );
    LCD_CursorShiftLeft();
    __delay_ms(500);
    LCD_CursorShiftLeft();
    __delay_ms(500);
    LCD_CursorShiftLeft();
    __delay_ms(500);
    LCD_CursorShiftLeft();
    __delay_ms(500);
    LCD_CursorShiftLeft();
    __delay_ms(500);
    LCD_CursorShiftLeft();
    __delay_ms(500);
    
    LCD_PrintString( "Alonsy" );
    
    LCD_CommandWrite( LCD_CMD_DISPLAY_ON_CURSOR_OFF );
    __delay_ms(1000);
  }
  
  return;
}
