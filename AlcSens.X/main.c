/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18326
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdint.h>
#include "stdio.h"
#include "math.h"

/*
                         Main application
 */


#define ADCCH_ANA2 0b000010     

#define AVE_NUM 1000
#define VCC 5.0f

typedef struct{
    float v;
    uint16_t alcppm;
}T_TABLE;

T_TABLE tvalTable[]={
{2.2   ,50},
{2.35   ,60},
{2.55   ,70},
{2.68   ,80},
{2.82   ,90},
{2.98   ,100},
{3.12   ,110},
{3.25   ,120},
{3.35   ,130},
{3.45   ,140},
{3.55   ,150},
{3.6   ,160},
{3.68   ,170},
{3.73   ,180},
{3.76   ,190},
{3.8   ,200},
{3.84   ,210},
{3.86   ,220},
{3.94   ,230},
{3.95   ,240},
{3.96   ,250},
{3.97   ,260},
{3.98   ,270},
{3.99   ,280},
{4.00   ,290},
{4.01   ,300},
{4.02   ,310},
{4.03   ,320},
{4.04   ,330},
{4.05   ,340},
{4.06   ,350},
{4.07   ,360},
{4.08   ,370},
{4.09   ,380},
{4.1   ,390},
{4.1   ,400},
{4.11   ,410},
{4.12   ,420},
{4.13   ,430},
{4.14   ,440},
{4.15   ,450},
{4.16   ,460},
{4.17   ,470},
{4.18   ,480},
{4.19   ,490},
{4.2   ,500},
{-1,-1},
};


void putstr( char * p )
{
        while(*p){ 
            EUSART_Write(*p);
            p++;
        }   
}

void main(void)
{
    uint16_t btn_cnt=0;
    SYSTEM_Initialize();
    
    __delay_ms(1000);
    putstr("\n\n\r\nMG812MONITOR V1.00\r\n");
    while (1)
    {
        char s[20];
        float ftotal;
        long total;
        int n;
        float fvrl;
        uint16_t alc2ppm ;

        ftotal = 0.0f;
        total = 0;
        for(int i= 0;i< AVE_NUM ;i++){
            total +=  ADC_GetConversion(ADCCH_ANA2);
        }     
        ftotal = (float)total * (VCC/1023);
        fvrl = ftotal / AVE_NUM;
        
        n= 0;
        while(tvalTable[n].ppm != -1){
            if(tvalTable[n].v<fvrl) break;
            n++;
        }
        
        alc2ppm = co2_table[n];
        sprintf(s,"%d,%5.3fV\r\n",alc2ppm,fvrl);
        putstr(s);

        // LED Drive
        if(alc2ppm <= 50 ){  // GREEN 
            IO_RC1_SetHigh();            IO_RC0_SetLow();
        }else{      //RED
            IO_RC1_SetLow();            IO_RC0_SetHigh();            
        }    
        
        __delay_ms(1000);
    }
}


/**
 End of File
*/