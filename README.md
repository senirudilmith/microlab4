
# Microcomputers LAB 04 
Waterlevel sensor using the PIC16F877A microcontroller 

<p>
 
 
 </p>

## Abstract 
A water level control system for a water tank was created mostly utilizing the PIC16f877A microcontroller. To obtain the necessary circuit, a C language code was generated using the MPLabs software, and a schematic layout of the required circuit was designed on the Proteus software and afterwards converted to a PCB layout. DC motors, sensors, and other devices were also employed to create the required circuit.





## Introduction 
We are constructing a waterlevel sensor using the PIC16F877A microcontroller and to demonstrate the logic behind the system we are using analogue thermal sensors as the switches interfaced with the system and LEDS as the output to detect the relavant logic levels. The truth table behind the programme used is shown below

<p>
 
 
 </p>

### Truth table
<img src = "https://user-images.githubusercontent.com/111168422/184471413-6dc406d7-23a6-4f0d-9beb-82599c1baef8.png" width = "800" height ="400"/>

<p>
 
 
 </p>


### Equiment
<ul>
<li>PIC16F877A microcontroller
 <p>   
 </p>
 
The PIC microcontroller PIC16f877a is one of the most well-known in the industry. This microcontroller is quite easy to use, and coding or programming it is also very simple. Because it employs FLASH memory technology, one of its key advantages is that it can be write-erased as many times as possible. It has a total of 40 pins, 33 of which are for input and output.The PIC16f877a is used in a wide range of devices. It's found in remote sensors, security and safety equipment, home automation, and a variety of industrial instruments. It also includes an EEPROM, which allows it to permanently store information such as transmitter codes, receiver frequencies, and other associated data. This controller is inexpensive and simple to operate.
 
 <p>
  
 </p>
 
<img src = "https://user-images.githubusercontent.com/111168422/184471728-6b954ec5-211a-49df-b4c6-b384149828d5.jpg" width = "300" height = "200"/>

 <p>  
  
  
 </p>
 
 <li>Jumper wires

<li>Breadboard
 
 <p>
  
  
 </p>
 
 <img src = "https://user-images.githubusercontent.com/111168422/184579893-ae61f129-dc6b-41bb-8a47-df53d74eec3d.png" width = "300" height = "200"/>

 
 <p>
  
 </p>

<li>Copper PCB

 <p>
  
 </p>
A printed circuit board (PCB) or printed wiring board (PWB) is a sandwiched laminated structure made up of conducting and insulating layers. PCBs have two distinct purposes. The initial step is to solder electronic components into certain positions on the outer layers. The second step is to provide reliable electrical connections (as well as reliable open circuits) between the component's terminals in a controlled way, which is known as PCB design.

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
<p>
 </p>


## PCB Design

<b> A PCB is designed using the Proteus software which is baised on the exsiting schematic design  </b>
<p>
 
 
 </p>


### Schematic Design 

<img src = "https://user-images.githubusercontent.com/111168422/184474878-cc7ec50e-db44-469c-8861-7aca1c22faf3.jpeg" width = "900" height = "500"/>

The above Schematic diagram is derived according to the code being used by the microcontroller, since we do not use any interrupt condtions in the code but instead only check for the respective logic levels of the three switches connected we can create the schematic diagram in the above manner without specifying for the interrupt ports.PORT C  RC 0,RC 3 and RC 4 are configured to be the respective input ports and PORT B  RB 1, RB 3 are configured to be the respective output ports. Port A was not used since if analog configuration  required to be connected they would be interfaced through this port.But in the circuit we have interfaced it with sensors in order to genarate a real world application of the PCB we had designed. 

<img src = "https://user-images.githubusercontent.com/111168422/184494268-cb3464d0-9d45-421b-9aa7-a7d246c691c6.png" width = "900" height = "500"/>

<p>
 
 
 </p>

### PCB layout 

<b> The PCB layout is genarated using the inbuilt PCB designing facilty of the Proteus Software and we use a top Copper Layout </b>

<img src = "https://user-images.githubusercontent.com/111168422/184475254-48a2ccd2-a423-4db6-a665-fbf007c17365.jpeg" width = "900" height = "500"/>

Manual tracing was done using the T50 line since that gives the appropiate width to be practically designed. Marker ink was used to etch the PCB on to the circuit and FeCl3 was used to remove the Copper that had not been etched by the marker ink therefore giving us the required layout of the circuit.   

<p>
 
 </p>

### 3D PCB layout

The three dimensional view of the PCB with the components 

<p>
 
 </p>

#### Bottom View

<img src = "https://user-images.githubusercontent.com/111168422/184476003-4653df47-2c4b-4597-a753-383ee8d157ca.png" width = "900" height = "500"/>

<p>
 
 
 </p>


### Desgined PCB 

The PCB obtained after soldering the circuit 

<img src = "https://user-images.githubusercontent.com/111168422/184480522-3171153e-bba6-4bdd-b64a-f47f7570b89e.png" width = "900" height = "500"/>

A jumper wire was connected since the connection cannot be made using a tracing line since we found no way to avoid the fundermental design error occuring when connecting the grounds therefore to mitigate this error a jumper wire cable is used. The base is used to connect the pic microcontroller.The header connectors are solderd on to the circuit as well as the other componenets. The header connectors are used to interface the circuit with the external sensors and the output.

<p>
 
 
 </p>
 
 
 ### PCB physical design process 
 
<ol>
 <li> Design the PCB in proteus software
 <li> Print out the design onto the shiny side of the transfer paper
 <li> Sand the copper plate so there is a rough surface for the design to stick to when transfered
 <li> Wash the copper with some water and rubbing alcohol and let it dry
 <li> Cut out the designs and place them face down on the copper
 <li> Run the copper plate with the design face down through a laminator 5-7 times until the plate is hot
 <li> Place the PCB into the etching solution and agitate for 25-30 minutes or until all the copper has dissolved around the design
 <li> Once all the copper is gone rinse it in the water bath, let it dry and use rubbing alcohol to remove off the ink transfered onto the PCB
 <li> And now you have an etched PCB board after that we drill the holes
  
  
 </ol> 
 


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

<p>
 
 
 </p>
      
### Code discussion

The code we use in this programme is created using the MPLAB X IDE V6.00. This was executed without the use of interrupt registers as analogue sensors are used the transtion edges would be spontaneous and instantaneous to be tracked by the intruept service routine therefore we used a regular bit test for each input pin nested within the while loop and test for each loop the corresponding status required and therby calling the subroutine.If loops are used to check the condtions of the input and give the relavant output. 

<p>
 
 
 </p>


## Sensors used
    
 We use a soil moisture sensor to act as the switches of the circuit. This sensor can measure the volumetric content of water inside the soil. This sensor is consists of mainly two parts, one is sensing probs and another one is the sensor module.The probes allow current to flow through the soil, and they then calculate the resistance value based on the soil's moisture content. The Sensor Module receives data from the sensor probes, processes it, and outputs the result as either a digital or analog signal.The Soil Moisture Sensor can provide both types of output Digital output (DO) and Analog output(AO).

### Process of the soil moisture sensor

When more water in the soil then prob’s conductivity will increase and resistance will decrease. So, a Low amount of voltage from the sensing probe is given to the Inverting input (2) of the IC. Then the LM393 Comparator IC compares this voltage with the threshold voltage. In this condition, this input voltage is less than the threshold voltage, so the soil sensor output goes LOW (0).When less water in the soil then prob’s have low conductivity and high resistance. So, a High amount of voltage from the sensing probe is given to the Inverting input (2) of the IC. Then the LM393 Comparator IC compares this voltage with the threshold voltage. In this condition, this input voltage is greater than the threshold voltage, so the sensor output goes High (1).

  
<img align = "middle" src = "https://user-images.githubusercontent.com/111168422/184584803-808fbaf7-6c91-4b04-a66b-87cb958231b6.png" width = "300" height = "300" />

## Uploading the code

we used the pickit 3 development kit to uplaod the c source code into the microcontroller and this was done via the mplab ipe software.The following connections were performed on the board and the program was uploaded
   
   <img src = "https://user-images.githubusercontent.com/111168422/184998581-09e34ba7-7c57-47b0-9495-1a770974c9b0.png">
   <p>
 
 </p>
 
 <p>
 
 
 </p>
 
   
   <img src = "https://user-images.githubusercontent.com/111168422/184998718-62798101-bcc0-4a78-bf4b-39365d39e141.png" >

<p>
 
 </p>
 
 Uploading the programe after production of the programme
 

<img src = "https://user-images.githubusercontent.com/111168422/184999393-72cf3133-bb67-4380-8066-fede9a669d6b.jpeg" height = "300" width = "500" />

## Implementation

<b> We built the circuit using 2 breadboards and placing the sensors and the outputs on the breadboards that we had created as shown below </b> 

<img src = "https://user-images.githubusercontent.com/111168422/185463637-f624bbc6-9b0f-45f6-ba44-268334556899.jpg" >

<b> The sensors were dipped in water to obtain the required output as the sensors would behave as the switches of the system </b>

<img src = "https://user-images.githubusercontent.com/111168422/185464662-efdf0261-e0cb-4a5f-b341-e5280c30cecc.jpg" >

### Issues with the sensors

<li> Since the sensors are not hydrophobic we cannot observe the correct output without observing a certain delay 
<li> We should allocate some time for the sensors to dry probably using a piece of cloth which is non static
<li> The sensors take some time to indicate the changes therefore we have to quickly clean them after use
<li> The reason the LED is blinking out of water is due to this
 
 
</li>

### Output Explanation

When we dip the sensors one and two into the water cup it performs the function of switches and the system should funtction according to the truth table we had created 
     <li> When we dip the third sensor the RED Led at the top should light up
     <li> When we dip the second sensor the RED LED should be still lit up
     <li> When we remove the both the above dipped sensors the RED led at the bottom should light up for 500ms 
     <li> When we dip all the three sensors the LEDS should turn off as all switches are off

</li>

We account for the delay observed in obtaining the outputs and we should let the nodes dry before we restart the process      

      
https://user-images.githubusercontent.com/111168422/185489325-9fd3bcda-93e7-4ace-bda8-5df5d9dc6ff9.mp4


## Conclusion 

The circuit we built worked according to the planned out logic and the relavant outputs were obtained. However we observed the issues regarding the output of the circuit with some issues. We should have used motion sensors to the circuit instead of the soil moisture sensors to obtain a better output instead. Soil moisture sensor has a node that is not hydrophobic therefore the outputs cannot be observed clearly because of the residue genrates a delay in potential differnce of the circuit. The PCB had a copper oxide formation but we could have avoided that by the application of protective coating on the circuit instead of using it directly can prevent the oxide formation. We could have used an other type of PCB for better effect like a aluminum backed PCB but this type of PCB can be built at home easily compared to other types of PCB. Could have used assembly code as it gives better flexibilty in the microcontroller.

## References 

<ul>
 <li>[1]Wikipedia Contributors, “Printed circuit board,” Wikipedia, Jan. 05, 2020. https://en.wikipedia.org/wiki/Printed_circuit_board
 <li>[1]“Dynamic Product Page | Microchip Technology,” www.microchip.com. https://www.microchip.com/en-us/product/PIC16F877A
‌ <li> [1]“Arduino&Soil Moisture Sensor-Interfacing Tutorial-Circuit Diagram,Applications,” Electronic Circuits and Diagrams-Electronic Projects and Design, Mar. 10, 2017. https://www.circuitstoday.com/arduino-soil-moisture-sensor#:~:text=Working%20of%20Sensor (accessed Aug. 19, 2022).
‌
‌
 </li>






