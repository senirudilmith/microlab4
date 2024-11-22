// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG

#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)

#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT disabled)

#pragma config PWRTE = OFF // Power-up Timer Enable bit (PWRT disabled)

#pragma config BOREN = OFF // Brown-out Reset Enable bit (BOR disabled)

#pragma config LVP = OFF // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)

#pragma config CPD = OFF // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)

#pragma config WRT = OFF // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)

#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.

// Use project enums instead of #define for ON and OFF.

#define _XTAL_FREQ 20000000

#include <xc.h>

#include <htc.h>

void activate1()

{

RB1 = 1;

RB3 = 0;       //the condition one was activated triggering the RB! connected motor and not triggering the RB3 connected motor 
}

void activate2()

{

RB1 = 1;

RB3 = 0;      //the condition two was activated triggering the RB! connected motor and not triggering the RB3 connected motor 
}

void activate3()

{

RB1 = 0; //the condition three was activated not triggering the RB1 connected motor and  triggering the RB3 connected motor for 500ms

RB3 = 1;

__delay_ms(500);

RB3 = 0;
}

void main()

{

TRISB1 = 0;     //Motor One - RB1  //PortB deaclared as the output ports

TRISB3 = 0;     //Motor Two - RB3

TRISC0 = 1;     //Switch one

TRISC3 = 1;     //Switch two       //PortC deaclared as the input ports

TRISC4 = 1;     //Switch three






while(1) {           //loop to infinty times till argument is met 

if(RC4 == 0) {                      //check if switch three is not set
    
    
        
        if(RC0 == 1 && RC3 == 0)     //check if switch one and two are not set
        {
            
            activate1();                    //go to condtion one
            
            
            
        }
        
        if(RC0 == 1 && RC3 == 1) {        //check if switch one and two are set 
            
            activate2();                  //If true go to condtion two
            
        }if(RC4 == 1){
            
            break;    
            
        }else{
            
            RB1 = 0;     //else deactivate all motors
            
            RB3 = 0;
            
            
        }
    }

}

    if(RC4 == 1)     //check if switch three is not set
    
    {
        
            if(RC0 == 1 && RC3 == 1)     //check if switch one and two are set
            
            {
            
                activate3();    //goto condtion three
                
                
            }else{
                
                RB1 = 0;    //if not deactivate all motors
                
                RB3 = 0;
                
            }
            
        }
}
