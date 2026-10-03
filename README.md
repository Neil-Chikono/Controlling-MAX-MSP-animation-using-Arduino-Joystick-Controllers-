Setup Of JoySticks Controlling Graphic Screen

<img width="3024" height="4032" alt="Joysticks Controlling Graphic Visuals" src="https://github.com/user-attachments/assets/e5ffbe54-0d25-48f5-a342-536a2a35c0dd" />

(Entries From Development) 

I used an arduino Mega 2560 because the project uses 6
potentiometers and 4 joysticks (with X and Y axis) an overall of 14 inputs to be processed. The mega board provides 15 analog inputs and 53 separate which very good for optimizing control of projects with inputs. With
this project I also wanted use a lcd display which would be programed to display the changing values of the potentiometers so I would not have to keep referring back to the serial monitor on my laptop. This would have
allowed me to have a smooth work low. Unfortunately the lcd screen i was using was faulty. I considered using segments but i had too much data that needed to be displayed.

This patch made in Max/msp takes in serial data that is uploaded on the serial monitor by
the arduino. In order process this data within in a max patch it has go through a converting
process. The data it receives is stores as ASCII values so you have to use various objects
transform it into a floating/integer value max will recognize
At present i am still using the patch to experiment with how I can process numerical input, I
would like to use boolean logic to program specific behaviors that produce certain patterns,
changes in colour and shifts in perspective. In the future i would like to incorporates gates
based on probabilities to to control the patch this will give me control but also allow more
expressive and unexpected events to occur.
I would like to explore ways of allowing one single input to branch off into different
processes and parameters. Then applying this process to a collection of inputs in order to
build a dynamic system.

Through my experimentation the lasers soon became these complex hyper-strings following a chaotic probabilistic pattern.Unfortunately as you create more complex openGL
patches in max/msp it becomes more difficult to save and record the generated video as it networked through multiple objects. So if i wanted to record a live performance i
would have to screen record. Creating 3D graphics is very limited in Max/msp as it relies on webGL libraries to archive them and does not have many in house functions to
extend the psychics and lightning simulation. Additionally it is harder to create smooth and vivid colours and textures in max/msp than it is in blender and touch designer.
Moving forward I would like to see how i can use arduino to interface with other 3D softwares.


https://github.com/user-attachments/assets/733e991a-17b6-473b-8a4a-b90fbedafa71



https://github.com/user-attachments/assets/d1772ee5-ab10-4b46-b4a3-eab4cc4d476b


















