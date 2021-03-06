/*
  Copyright (C) 2020 Jose Guerra Carmenate <joseguerracarmenate@gmail.com> 

  This file is part of "LCD library for 8-bits PIC".
  
  "LCD library for 8-bits PIC" is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/**
  @author Jose Guerra Carmenate, joseguerracarmenate@gmail.com

  @file lcd_config.h

  @brief LCD Driver Configuration Header File for 8bit PIC MCUs

    This header file provides configuration options for driver for LCD.
*/

// MACROS

/** 
  @brief PORT bit for Enable pin 
  
  This macro define the PORT bit of the pin conected to LCD's Enable pin
  
  <b>Example</b>
  @code
  #define EN      RD0  
  @endcode
  
*/
#define EN      RD0 

/** 
  @brief TRIS bit for Enable pin 
  
  This macro define the TRIS bit of the pin conected to LCD's Enable pin
  
  <b>Example</b>
  @code
  #define EN_tris TRISD0
  @endcode
  
*/
#define EN_tris TRISD0

/** 
  @brief PORT bit for Register Select (RS) pin 
  
  This macro define the PORT bit of the pin conected to LCD's RS pin
  
  <b>Example</b>
  @code
  #define RS      RD1
  @endcode
  
*/
#define RS      RD1

/** 
  @brief TRIS bit for Register select (RS) pin 
  
  This macro define the TRIS bit of the pin conected to LCD's RS pin
  
  <b>Example</b>
  @code
  #define RS_tris TRISD1
  @endcode
  
*/
#define RS_tris TRISD1

// Data Bus definition

/** 
  @brief PORT bit for D4 pin 
  
  This macro define the PORT bit of the pin conected to LCD's D4 pin
  
  <b>Example</b>
  @code
  #define D4      RB4
  @endcode
  
*/
#define D4      RD4

/** 
  @brief TRIS bit for Register select D4 pin 
  
  This macro define the TRIS bit of the pin conected to LCD's D4 pin
  
  <b>Example</b>
  @code
  #define D4_tris TRISD4
  @endcode
*/
#define D4_tris TRISD4

/** 
  @brief PORT bit for D5 pin 
  
  This macro define the PORT bit of the pin conected to LCD's D5 pin
  
  <b>Example</b>
  @code
  #define D5      RB5
  @endcode
  
*/
#define D5      RD5

/** 
  @brief TRIS bit for Register select D5 pin 
  
  This macro define the TRIS bit of the pin conected to LCD's D5 pin
  
  <b>Example</b>
  @code
  #define D5_tris TRISD5
  @endcode
*/
#define D5_tris TRISD5

/** 
  @brief PORT bit for D6 pin 
  
  This macro define the PORT bit of the pin conected to LCD's D6 pin
  
  <b>Example</b>
  @code
  #define D6      RB6
  @endcode
  
*/
#define D6      RD6

/** 
  @brief TRIS bit for Register select D6 pin 
  
  This macro define the TRIS bit of the pin conected to LCD's D6 pin
  
  <b>Example</b>
  @code
  #define D6_tris TRISD6
  @endcode
*/
#define D6_tris TRISD6

/** 
  @brief PORT bit for D7 pin 
  
  This macro define the PORT bit of the pin conected to LCD's D7 pin
  
  <b>Example</b>
  @code
  #define D7      RB7
  @endcode
  
*/
#define D7      RD7
/** 
  @brief TRIS bit for Register select D7 pin 
  
  This macro define the TRIS bit of the pin conected to LCD's D7 pin
  
  <b>Example</b>
  @code
  #define D7_tris TRISD7
  @endcode
*/
#define D7_tris TRISD7


