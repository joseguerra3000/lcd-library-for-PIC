/*
 * File:   main.c
 * Author: jose
 *
 * Created on July 5, 2020, 10:01 AM
 */

// PIC16F887 Configuration Bit Settings
// 'C' source line config statements
// CONFIG1
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // RE3/MCLR pin function select bit (RE3/MCLR pin function is digital input, MCLR internally tied to VDD)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

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
  
  ANSEL = 0x00; // para que los pines RE0 (AN5) y RE1(AN6) sean digitales
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
