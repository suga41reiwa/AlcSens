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
#define TABLE_TOPV 3.23f // 400ppm
typedef struct{
    float v;
    uint16_t alcppm;
}T_TABLE;

T_Table tvalTable[]={
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
};


const uint16_t co2_table[]={
400  ,402  ,404  ,407  ,409  ,411  ,413  ,416  ,418  ,420  ,
423  ,425  ,427  ,430  ,432  ,434  ,437  ,439  ,441  ,444  ,
446  ,449  ,451  ,454  ,456  ,459  ,461  ,464  ,466  ,469  ,
472  ,474  ,477  ,479  ,482  ,485  ,487  ,490  ,493  ,495  ,
498  ,501  ,504  ,506  ,509  ,512  ,515  ,518  ,520  ,523  ,
526  ,529  ,532  ,535  ,538  ,541  ,544  ,547  ,550  ,553  ,
556  ,559  ,562  ,565  ,568  ,571  ,574  ,578  ,581  ,584  ,
587  ,590  ,594  ,597  ,600  ,603  ,607  ,610  ,613  ,617  ,
620  ,624  ,627  ,630  ,634  ,637  ,641  ,644  ,648  ,652  ,
655  ,659  ,662  ,666  ,670  ,673  ,677  ,681  ,685  ,688  ,
692  ,696  ,700  ,704  ,707  ,711  ,715  ,719  ,723  ,727  ,
731  ,735  ,739  ,743  ,747  ,751  ,756  ,760  ,764  ,768  ,
772  ,777  ,781  ,785  ,789  ,794  ,798  ,802  ,807  ,811  ,
816  ,820  ,825  ,829  ,834  ,838  ,843  ,848  ,852  ,857  ,
862  ,867  ,871  ,876  ,881  ,886  ,891  ,895  ,900  ,905  ,
910  ,915  ,920  ,925  ,931  ,936  ,941  ,946  ,951  ,956  ,
962  ,967  ,972  ,978  ,983  ,988  ,994  ,999  ,1005  ,1010  ,1016  ,
1021  ,1027  ,1033  ,1038  ,1044  ,1050  ,1056  ,1061  ,1067  ,1073  ,
1079  ,1085  ,1091  ,1097  ,1103  ,1109  ,1115  ,1121  ,1127  ,1134  ,
1140  ,1146  ,1152  ,1159  ,1165  ,1171  ,1178  ,1184  ,1191  ,1197  ,
1204  ,1211  ,1217  ,1224  ,1231  ,1237  ,1244  ,1251  ,1258  ,1265  ,
1272  ,1279  ,1286  ,1293  ,
1300  ,1307  ,1314  ,1322  ,1329  ,1336  ,1344  ,1351  ,1358  ,
1366  ,1373  ,1381  ,1388  ,1396  ,1404  ,1411  ,1419  ,1427  ,
1435  ,1443  ,1451  ,1459  ,1467  ,1475  ,1483  ,1491  ,1499  ,
1507  ,1516  ,1524  ,1532  ,1541  ,1549  ,1558  ,1566  ,1575  ,
1584  ,1592  ,1601  ,1610  ,1619  ,1628  ,1637  ,1646  ,1655  ,
1664  ,1673  ,1682  ,1691  ,1701  ,1710  ,1719  ,1729  ,1738  ,
1748  ,1758  ,1767  ,1777  ,1787  ,1797  ,1806  ,1816  ,1826  ,
1836  ,1846  ,1857  ,1867  ,1877  ,1887  ,1898  ,1908  ,1919  ,
1929  ,1940  ,1951  ,1961  ,1972  ,1983  ,1994  ,2005  ,2016  ,
2027  ,2038  ,2049  ,2060  ,2072  ,2083  ,2095  ,2106  ,2118  ,
2129  ,2141  ,2153  ,2165  ,2177  ,2189  ,2201  ,2213  ,2225  ,
2237  ,2249  ,2262  ,2274  ,2287  ,2299  ,2312  ,2325  ,2337  ,
2350  ,2363  ,2376  ,2389  ,2402  ,2416  ,2429  ,2442  ,2456  ,
2469  ,2483  ,2496  ,2510  ,2524  ,2538  ,2552  ,2566  ,2580  ,
2594  ,2608  ,2623  ,2637  ,2651  ,2666  ,2681  ,2695  ,2710  ,
2725  ,2740  ,2755  ,2770  ,2786  ,2801  ,2816  ,2832  ,2847  ,
2863  ,2879  ,2895  ,2910  ,2926  ,2943  ,2959  ,2975  ,2991  ,
3008  ,3024  ,3041  ,3058  ,3074  ,3091  ,3108  ,3125  ,3143  ,
3160  ,3177  ,3195  ,3212  ,3230  ,3248  ,3266  ,3284  ,3302  ,
3320  ,3338  ,3356  ,3375  ,3393  ,3412  ,3431  ,3450  ,3469  ,
3488  ,3507  ,3526  ,3546  ,3565  ,3585  ,3604  ,3624  ,3644  ,
3664  ,3684  ,3704  ,3725  ,3745  ,3766  ,3787  ,3807  ,3828  ,
3849  ,3871  ,3892  ,3913  ,3935  ,3956  ,3978  ,4000  ,4022  ,
4044  ,4066  ,4089  ,4111  ,4134  ,4156  ,4179  ,4202  ,4225  ,
4249  ,4272  ,4295  ,4319  ,4343  ,4367  ,4391  ,4415  ,4439  ,
4464  ,4488  ,4513  ,4538  ,4562  ,4588  ,4613  ,4638  ,4664  ,
4689  ,4715  ,4741  ,4767  ,4793  ,4820  ,4846  ,4873  ,4900  ,
4926  ,4954  ,4981  ,5008  ,5036  ,5063  ,5091  ,5119  ,5147  ,
5176  ,5204  ,5233  ,5261  ,5290  ,5319  ,5349  ,5378  ,5408  ,
5437  ,5467  ,5497  ,5528  ,5558  ,5589  ,5619  ,5650  ,5681  ,
5712  ,5744  ,5775  ,5807  ,5839  ,5871  ,5903  ,5936  ,5969  ,
6001  ,6034  ,6068  ,6101  ,6134  ,6168  ,6202  ,6236  ,6270  ,
6305  ,6340  ,6374  ,6409  ,6445  ,6480  ,6516  ,6552  ,6588  ,
6624  ,6660  ,6697  ,6734  ,6771  ,6808  ,6845  ,6883  ,6921  ,
6959  ,6997  ,7036  ,7074  ,7113  ,7152  ,7192  ,7231  ,7271  ,
7311  ,7351  ,7391  ,7432  ,7473  ,7514  ,7555  ,7597  ,7639  ,
7681  ,7723  ,7765  ,7808  ,7851  ,7894  ,7937  ,7981  ,8025  ,
8069  ,8113  ,8158  ,8203  ,8248  ,8293  ,8339  ,8385  ,8431  ,
8477  ,8524  ,8571  ,8618  ,8665  ,8713  ,8761  ,8809  ,8857  ,
8906  ,8955  ,9004  ,9054  ,9103  ,9153  ,9204  ,9254  ,9305  ,
9356  ,9408  ,9460  ,9512  ,9564  ,9616  ,9669  ,9722  ,9776  ,
9830  ,9884  ,9938  ,9993  ,10048  ,
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
    float tbltop_v = TABLE_TOPV;
    SYSTEM_Initialize();
    
    __delay_ms(1000);
    putstr("\n\n\r\nMG812MONITOR V1.00\r\n");
    while (1)
    {
        char s[20];
        float ftotal;
        long total;
        int n;
        float fco2v;
        uint16_t co2ppm ;

        ftotal = 0.0f;
        total = 0;
        for(int i= 0;i< AVE_NUM ;i++){
            total +=  ADC_GetConversion(ADCCH_ANA2);
        }     
        ftotal = (float)total * (VCC/1023);
        fco2v = ftotal / AVE_NUM;
        n =  (tbltop_v-fco2v)/(1E-3);

        if(n<0) n= 0;
        else if( n>= (sizeof(co2_table)/2))n=sizeof(co2_table)/2-1;
        co2ppm = co2_table[n];
        sprintf(s,"%d,%5.3fV\r\n",co2ppm,fco2v);
        putstr(s);

        // LED Drive
        if(co2ppm < 700){  // GREEN 
            IO_RC1_SetHigh();            IO_RC0_SetLow();
        }else{      //RED
            IO_RC1_SetLow();            IO_RC0_SetHigh();            
        }    
        
        // manual Calibration
        if(IO_RC2_PORT ==0){
            btn_cnt++;
            if(btn_cnt == 2){
                tbltop_v = fco2v - 0.005;
                btn_cnt =2;
            }
        }else{
            btn_cnt=0;
        }

        __delay_ms(1000);
    }
}


/**
 End of File
*/