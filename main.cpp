/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 500 
#define pinLED1 PA_10
#define pinLED2 PB_5
#define pinLED3 PB_10

DigitalOut led1(pinLED1);
DigitalOut led2(pinLED2);
DigitalOut led3(pinLED3);

Ticker ticker1;
Ticker ticker2;
Ticker ticker3;

void funcionTicker1();
void funcionTicker2();
void funcionTicker3();

int main()
{
    ticker1.attach(&funcionTicker1,500ms);
    ticker2.attach(&funcionTicker2,1000ms);
    ticker3.attach(&funcionTicker3,1500ms);
    

    while (true)
    {       
        sleep();
    }
}

void funcionTicker1(){
    led1=!led1;
}

void funcionTicker2(){
led2=!led2;
}

void funcionTicker3(){
    led3=!led3;
}