# Master-Slave Led controller
## A simple master slave configuration in arduino has been tried and implemented using a push button on the master arduino and led on the slave arduino.
# Controls
Contains all code for the controls subsystem
## Working:
Control subsystem is responsible for accurate control of rover and arm.
Drive Control: Arduino mega is used for motor control which is interfaced to jetson xavier using rosserial.
Arm Control: A game pad has been used programmed using arduino mega.A custom inverse kinematics controller has been implemented for the arm to acheive accurate control.
