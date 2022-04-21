# M2_CarProtection
It is a Vehicle Safety System that automatically detect obstacles and slows down its speed 
# Inroduction
## Car Protection system
This project is comes into picture to reduce the accidents throgh the vehicles on highways or the roads.
Automotive safety is the practice of design, construction, equipment and regulation to minimize the occurrence and consequences of traffic collisions involving motor vehicles. Road traffic safety more broadly includes roadway design.
## Working
This system works on very basic rule. This system detects the obstacle with the help of ultrasonic sensor. Then this is analog in nature and must be converted into digital signal. Then this signal is passed through ADC then this signal is send to the PWM and with the the help of DC motor it gets slows down and and the driver can succesfully save himself and other from accident.

## In Action

|ADC|Motor Output|
|:--:|:--:|
|![ADC_Output](https://github.com/shahwar92/M2_CarProtection/blob/main/4_TestCases/Screenshot%20(60).png)|![Motor_output](https://github.com/shahwar92/M2_CarProtection/blob/main/4_TestCases/Screenshot%20(61).png)|

## CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Build](https://github.com/shahwar92/M2_CarProtection/actions/workflows/Compile.yml/badge.svg)](https://github.com/shahwar92/M2_CarProtection/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/shahwar92/M2_CarProtection/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/shahwar92/M2_CarProtection/actions/workflows/cppcheck.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e459bbe9d13141c3bb1a4a525b211a09)](https://www.codacy.com/gh/shahwar92/M2_CarProtection/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=shahwar92/M2_CarProtection&amp;utm_campaign=Badge_Grade)

