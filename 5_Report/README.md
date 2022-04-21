## Vehicle Safety System

# Requirements
## Introduction
   Environmental imperatives and safety requirements are two critical issues facing the automotive industry worldwide. Indian Automobile Industry in the last decade has made significant progress on the environmental front by adopting stringent emission standards, and is progressing towards technical alignment with international safety standards. 
  * crash mitigation system
  * crash avoidance system
   
crash mitigation system is used here. A collision avoidance system (CAS), also known as a pre-crash system, forward collision warning system, or collision mitigation system, is an advanced driver-assistance system designed to prevent or reduce the severity of a collision. Here, the ultrasonic sensor is used to identify the the distance between the driver's car and other car. If the ultrasonic sensor gets activated the control system shows error message then the driver can stop the vehicle or slows down the vehicle. 


 



## SWOT ANALYSIS

![SWOT](https://github.com/shahwar92/M2_CarProtection/blob/main/1_Requirements/UntitledSWOTAnalysisTemplate.png)

## 4W and 1H

## Who

    The peeson who owns a car can use this safety system.

## What

    This system alerts the driver of the vehicle when ever it detects any obstacle with in its range. And its range is changeble. 

## When

    It can be used any time when there is a risk of accident. Preferably one should use all the time while driving.

## Where

    It can be used on more accident prone areas. But better to use every where , even there would no traffic.

## How

    This system can fit every in vehicle. All it is doing that the ultra sonic sensor detects the obstacle and inform the driver to slow down its speed.

# Detail requirements
##  High level Requirements

| ID    | Description                             | Status              | 
|-------|-----------------------------------------|---------------------|
| HLR01 | Ultrasonic Sensor                       |Implemented          |
| HLR02 |Potentiometer                            |Implemented          |

##  Low level Requirements


| ID    | Description                             | Status              | 
|-------|-----------------------------------------|---------------------|
| LLR01 |Ultrasonic Sensor - If the Ultrasonic senses the vehicle slows down   |Implemented          |
| LLR2  |Potentiometer- through ADC the decimal value is got and these decimal value is used to control the speed of motor|Implemented          |
# Design

## High Level Design

![HighLevelDiagram](https://github.com/shahwar92/M2_CarProtection/blob/main/2_Design/Screenshot%20(58).png)

## Low level Design


![LowLevelDiagram](https://github.com/shahwar92/M2_CarProtection/blob/main/2_Design/Screenshot%20(59).png)
## ADC Output from the potentiometer

![ADC_Output](https://github.com/shahwar92/M2_CarProtection/blob/main/4_TestCases/Screenshot%20(60).png)


## Motor output

![Motor_output](https://github.com/shahwar92/M2_CarProtection/blob/main/4_TestCases/Screenshot%20(61).png)

