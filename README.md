
# Microcomputers LAB 04 
Waterlevel sensor using the PIC16F877A microcontroller 

## Introduction 
We are constructing a waterlevel sensor using the PIC16F877A microcontroller and to demonstrate the logic behind the system we are using analogue thermal sensors as the switches interfaced with the system and LEDS as the output to detect the relavant logic levels. The truth table behind the programme used is shown below

### Truth table
<img src = "https://user-images.githubusercontent.com/111168422/184471413-6dc406d7-23a6-4f0d-9beb-82599c1baef8.png" width = "800" height ="400"/>

### Equiment
<ul>
<li>PIC16F877A microcontroller
 <p>   
 </p>
 
<img src = "https://user-images.githubusercontent.com/111168422/184471728-6b954ec5-211a-49df-b4c6-b384149828d5.jpg" width = "300" height = "200"/>

 <p>  
 </p>
 
 <li>Jumper wires

<li>Breadboard
 
 <p>
 </p>

<li>Copper PCB

 <p>
  
 </p>
  
<img src = "https://user-images.githubusercontent.com/111168422/184474247-b2addf19-b9cb-488e-8027-138786af37ea.jpeg" width = "300" height = "200" align = middle/>

 <p>   
  
 </p>
 
<li>LED 

<li>Soil moisture sensors
 
 <p>
 </p>
 
 <img src = "https://user-images.githubusercontent.com/111168422/184555131-b6f20775-30ba-45d9-8c90-b80aa82f17a5.png" >

 

<li>5V DC Power Supply

<li>Pins for external connections

<li>Crystal Oscillator 20Mhz

 <p>
 </p>
 
 <img src = "https://user-images.githubusercontent.com/111168422/184554894-85998104-95a1-4cae-ba83-5375edf1b312.png" >

 <p>
 </p>
 

<li>22pF Capacitors
 
 <p>
 </p>
 
 <img src = "https://user-images.githubusercontent.com/111168422/184554982-d766fb28-d2b9-4316-828e-3b4dad6428e1.png" width = "150" height = "150" >

 <p>
 </p>
 
  
</ul>



## PCB Design

<b> A PCB is designed using the Proteus software which is baised on the exsiting schematic design  </b>



### Schematic Design 

<img src = "https://user-images.githubusercontent.com/111168422/184474878-cc7ec50e-db44-469c-8861-7aca1c22faf3.jpeg" width = "900" height = "500"/>

The above Schematic diagram is derived according to the code being used by the microcontroller, since we do not use any interrupt condtions in the code but instead only check for the respective logic levels of the three switches connected we can create the schematic diagram in the above manner without specifying for the interrupt ports.PORT C  RC 0,RC 3 and RC 4 are configured to be the respective input ports and PORT B  RB 1, RB 3 are configured to be the respective output ports. Port A was not used since if analog configuration  required to be connected they would be interfaced through this port.But in the circuit we have interfaced it with sensors in order to genarate a real world application of the PCB we had designed. 

<img src = "https://user-images.githubusercontent.com/111168422/184494268-cb3464d0-9d45-421b-9aa7-a7d246c691c6.png" width = "900" height = "500"/>



### PCB layout 

<b> The PCB layout is genarated using the inbuilt PCB designing facilty of the Proteus Software and we use a top Copper Layout </b>

<img src = "https://user-images.githubusercontent.com/111168422/184475254-48a2ccd2-a423-4db6-a665-fbf007c17365.jpeg" width = "900" height = "500"/>

Manual tracing was done using the T50 line since that gives the appropiate width to be practically designed. Marker ink was used to etch the PCB on to the circuit and FeCl3 was used to remove the Copper that had not been etched by the marker ink therefore giving us the required layout of the circuit.   



### 3D PCB layout

The three dimensional view of the PCB with the components 

#### Bottom View

<img src = "https://user-images.githubusercontent.com/111168422/184476003-4653df47-2c4b-4597-a753-383ee8d157ca.png" width = "900" height = "500"/>


### Desgined PCB 

The PCB obtained after soldering the circuit 

<img src = "https://user-images.githubusercontent.com/111168422/184480522-3171153e-bba6-4bdd-b64a-f47f7570b89e.png" width = "900" height = "500"/>

A jumper wire was connected since the connection cannot be made using a tracing line since we found no way to avoid the fundermental design error occuring when connecting the grounds therefore to mitigate this error a jumper wire cable is used. The base is used to connect the pic microcontroller.The header connectors are solderd on to the circuit as well as the other componenets. The header connectors are used to interface the circuit with the external sensors and the output.

## Code

// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG

#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)

#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)

#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)

#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)

#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)

#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)

#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)

#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

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
    
    TRISB3 = 0;     //Motor Two - RB2
    
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
        
      
### Code discussion

The code we use in this programme is created using the MPLAB X IDE V6.00. This was executed without the use of interrupt registers as analogue sensors are used the transtion edges would be spontaneous and instantaneous to be tracked by the intruept service routine therefore we used a regular bit test for each input pin nested within the while loop and test for each loop the corresponding status required and therby calling the subroutine.If loops are used to check the condtions of the input and give the relavant output. 

## Sensors used
    
    
    
    





        
      
    



