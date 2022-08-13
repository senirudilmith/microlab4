
# Microcomputers LAB 04 
Waterlevel sensor using the PIC16F877A microcontroller 

## Introduction 
We are constructing a waterlevel sensor using the PIC16F877A microcontroller and to demonstrate the logic behind the system we are using analogue thermal sensors as the switches interfaced with the system and LEDS as the output to detect the relavant logic levels. The truth table behind the programme used is shown below

### Truth table
<img src = "https://user-images.githubusercontent.com/111168422/184471413-6dc406d7-23a6-4f0d-9beb-82599c1baef8.png" width = "800" height ="400"/>

### Equiment
<ul>
<li>PIC16F877A microcontroller
 <pre>   </pre>
 
<img src = "https://user-images.githubusercontent.com/111168422/184471728-6b954ec5-211a-49df-b4c6-b384149828d5.jpg" width = "300" height = "200"/>

 <pre>  </pre>
 
 <li>Jumper wires

<li>Breadboard

<li>Copper PCB

 <pre>  </pre>
 
 
<img src = "https://user-images.githubusercontent.com/111168422/184474247-b2addf19-b9cb-488e-8027-138786af37ea.jpeg" width = "300" height = "200" align = middle/>

 <pre>   </pre>
 
<li>LED 

<li>Analogue thermal sensors

<li>5V DC Power Supply

<li>Pins for external connections

<li>Crystal Oscillator 20Mhz

<li>22pF Capacitors
  
</ul>



## PCB Design

A PCB is designed using the Proteus software which is baised on the exsiting schematic design 



### Schematic Design 

<img src = "https://user-images.githubusercontent.com/111168422/184474878-cc7ec50e-db44-469c-8861-7aca1c22faf3.jpeg" width = "900" height = "500"/>

The above Schematic diagram is derived according to the code being used by the microcontroller, since we do not use any interrupt condtions in the code but instead only check for the respective logic levels of the three switches connected we can create the schematic diagram in the above manner without specifying for the interrupt ports.PORT C  RC 0,RC 3 and RC 4 are configured to be the respective input ports and PORT B  RB 1, RB 3 are configured to be the respective output ports. Port A was not used since if analog configuration  required to be connected they would be interfaced through this port.But in the circuit we have interfaced it with sensors in order to genarate a real world application of the PCB we had designed. 



### PCB layout 

The PCB layout is genarated using the inbuilt PCB designing facilty of the Proteus Software and we use a top Copper Layout 

<img src = "https://user-images.githubusercontent.com/111168422/184475254-48a2ccd2-a423-4db6-a665-fbf007c17365.jpeg" width = "900" height = "500"/>

Manual tracing was done using the T50 line since that gives the appropiate width to be practically designed. Marker ink was used to etch the PCB on to the circuit and FeCl3 was used to remove the Copper that had not been etched by the marker ink therefore giving us the required layout of the circuit.   



### 3D PCB layout

The three dimensional view of the PCB with the components 

<img src = "https://user-images.githubusercontent.com/111168422/184476003-4653df47-2c4b-4597-a753-383ee8d157ca.png" width = "900" height = "500"/>

### Desgined PCB 

The PCB obtained after soldering the circuit 

<img src = "https://user-images.githubusercontent.com/111168422/184480522-3171153e-bba6-4bdd-b64a-f47f7570b89e.png" width = "900" height = "500"/>

A jumper wire was connected since the connection cannot be made using a tracing line since we found no way to avoid the fundermental design error occuring when connecting the grounds therefore to mitigate this error a jumper wire cable is used. The base is used to connect the pic microcontroller.The header connectors are solderd on to the circuit as well as the other componenets. The header connectors are used to interface the circuit with the external sensors.

