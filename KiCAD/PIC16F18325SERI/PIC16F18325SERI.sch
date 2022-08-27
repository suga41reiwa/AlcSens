EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector_Generic:Conn_01x06 J2
U 1 1 62B6C87B
P 6325 1875
F 0 "J2" H 6243 1350 50  0000 C CNN
F 1 "Conn_01x06" H 6243 1441 50  0000 C CNN
F 2 "" H 6325 1875 50  0001 C CNN
F 3 "~" H 6325 1875 50  0001 C CNN
	1    6325 1875
	1    0    0    1   
$EndComp
Wire Wire Line
	6125 2075 5075 2075
Wire Wire Line
	3075 2075 3075 3475
Wire Wire Line
	6125 1975 3425 1975
Wire Wire Line
	3425 1975 3425 1750
$Comp
L power:+5V #PWR02
U 1 1 62B6D90C
P 3425 1750
F 0 "#PWR02" H 3425 1600 50  0001 C CNN
F 1 "+5V" H 3440 1923 50  0000 C CNN
F 2 "" H 3425 1750 50  0001 C CNN
F 3 "" H 3425 1750 50  0001 C CNN
	1    3425 1750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR08
U 1 1 62B6E195
P 5675 2275
F 0 "#PWR08" H 5675 2025 50  0001 C CNN
F 1 "GND" H 5680 2102 50  0000 C CNN
F 2 "" H 5675 2275 50  0001 C CNN
F 3 "" H 5675 2275 50  0001 C CNN
	1    5675 2275
	1    0    0    -1  
$EndComp
Wire Wire Line
	6125 1875 5675 1875
Wire Wire Line
	5675 1875 5675 2275
Wire Wire Line
	5850 3275 5850 1775
Wire Wire Line
	5850 1775 6125 1775
Wire Wire Line
	6000 3375 6000 1675
Wire Wire Line
	6000 1675 6125 1675
Wire Wire Line
	6175 3175 6175 3275
$Comp
L power:GND #PWR010
U 1 1 62B6F1BC
P 6175 3275
F 0 "#PWR010" H 6175 3025 50  0001 C CNN
F 1 "GND" H 6180 3102 50  0000 C CNN
F 2 "" H 6175 3275 50  0001 C CNN
F 3 "" H 6175 3275 50  0001 C CNN
	1    6175 3275
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR09
U 1 1 62B6FA64
P 6175 2975
F 0 "#PWR09" H 6175 2825 50  0001 C CNN
F 1 "+5V" H 6190 3148 50  0000 C CNN
F 2 "" H 6175 2975 50  0001 C CNN
F 3 "" H 6175 2975 50  0001 C CNN
	1    6175 2975
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C1
U 1 1 62B6FD4A
P 6175 3075
F 0 "C1" H 6267 3121 50  0000 L CNN
F 1 "C_Small" H 6267 3030 50  0000 L CNN
F 2 "" H 6175 3075 50  0001 C CNN
F 3 "~" H 6175 3075 50  0001 C CNN
	1    6175 3075
	1    0    0    -1  
$EndComp
Connection ~ 6175 3175
$Comp
L power:+5V #PWR03
U 1 1 62B71C9F
P 3425 2825
F 0 "#PWR03" H 3425 2675 50  0001 C CNN
F 1 "+5V" H 3440 2998 50  0000 C CNN
F 2 "" H 3425 2825 50  0001 C CNN
F 3 "" H 3425 2825 50  0001 C CNN
	1    3425 2825
	1    0    0    -1  
$EndComp
Wire Wire Line
	3425 2825 3425 3175
Text Notes 6450 2125 0    50   ~ 0
Vp
Text Notes 6425 2000 0    50   ~ 0
+V\n
Text Notes 6475 1900 0    50   ~ 0
G
Text Notes 6425 1800 0    50   ~ 0
PD
Text Notes 6425 1725 0    50   ~ 0
PC
$Comp
L Connector_Generic:Conn_01x06 J1
U 1 1 62B82708
P 2775 4225
F 0 "J1" H 2650 4550 50  0000 L CNN
F 1 "AE-CH340E-TYPEC" H 3025 4150 50  0000 L CNN
F 2 "" H 2775 4225 50  0001 C CNN
F 3 "~" H 2775 4225 50  0001 C CNN
	1    2775 4225
	-1   0    0    1   
$EndComp
Wire Wire Line
	2975 4125 3125 4125
Wire Wire Line
	3125 4125 3125 3850
$Comp
L power:+5V #PWR01
U 1 1 62B85943
P 3125 3850
F 0 "#PWR01" H 3125 3700 50  0001 C CNN
F 1 "+5V" H 3140 4023 50  0000 C CNN
F 2 "" H 3125 3850 50  0001 C CNN
F 3 "" H 3125 3850 50  0001 C CNN
	1    3125 3850
	-1   0    0    -1  
$EndComp
$Comp
L power:GND #PWR04
U 1 1 62B8685A
P 3475 3975
F 0 "#PWR04" H 3475 3725 50  0001 C CNN
F 1 "GND" H 3480 3802 50  0000 C CNN
F 2 "" H 3475 3975 50  0001 C CNN
F 3 "" H 3475 3975 50  0001 C CNN
	1    3475 3975
	-1   0    0    -1  
$EndComp
Wire Wire Line
	3475 3925 3475 3975
Text Notes 2700 4050 2    50   ~ 0
CTS
Text Notes 2700 3950 2    50   ~ 0
GND
Text Notes 2700 4150 2    50   ~ 0
VCC
Text Notes 2700 4250 2    50   ~ 0
TXD
Text Notes 2700 4350 2    50   ~ 0
RXD\n
Text Notes 2700 4450 2    50   ~ 0
RTS
Wire Wire Line
	2975 3925 3475 3925
Wire Wire Line
	2975 4225 3250 4225
Wire Wire Line
	3250 3575 3250 4225
Wire Wire Line
	2975 4325 3325 4325
Wire Wire Line
	3325 3675 3325 4325
$Comp
L Device:R R1
U 1 1 62C92358
P 5075 2225
F 0 "R1" H 5145 2271 50  0000 L CNN
F 1 "10K" H 5145 2180 50  0000 L CNN
F 2 "" V 5005 2225 50  0001 C CNN
F 3 "~" H 5075 2225 50  0001 C CNN
	1    5075 2225
	1    0    0    -1  
$EndComp
Connection ~ 5075 2075
Wire Wire Line
	5075 2075 3075 2075
$Comp
L power:GND #PWR05
U 1 1 62C92F41
P 5075 2375
F 0 "#PWR05" H 5075 2125 50  0001 C CNN
F 1 "GND" H 5080 2202 50  0000 C CNN
F 2 "" H 5075 2375 50  0001 C CNN
F 3 "" H 5075 2375 50  0001 C CNN
	1    5075 2375
	1    0    0    -1  
$EndComp
Wire Notes Line
	2775 3850 2775 3800
Wire Notes Line
	2775 3800 1750 3800
Wire Notes Line
	1750 3800 1750 4525
Wire Notes Line
	1750 4525 2775 4525
Wire Notes Line
	2775 4525 2775 4500
$Comp
L Device:LED D1
U 1 1 6309889B
P 6000 3675
F 0 "D1" H 5775 3725 50  0000 C CNN
F 1 "GREEN" H 6150 3775 50  0000 C CNN
F 2 "" H 6000 3675 50  0001 C CNN
F 3 "~" H 6000 3675 50  0001 C CNN
	1    6000 3675
	1    0    0    -1  
$EndComp
NoConn ~ 5375 3775
Wire Wire Line
	5375 3475 5725 3475
Wire Wire Line
	5375 3375 6000 3375
Wire Wire Line
	5375 3275 5850 3275
Wire Wire Line
	5375 3175 6175 3175
NoConn ~ 3475 3775
Wire Wire Line
	3475 3675 3325 3675
Wire Wire Line
	3475 3575 3250 3575
Wire Wire Line
	3075 3475 3475 3475
Wire Wire Line
	3425 3175 3475 3175
NoConn ~ 5850 4350
Wire Wire Line
	5375 4550 5850 4550
Text Notes 6075 4275 0    50   ~ 0
AO
Text Notes 6075 4375 0    50   ~ 0
DO
Text Notes 6075 4475 0    50   ~ 0
GND
Text Notes 6075 4600 0    50   ~ 0
VCC
$Comp
L Connector:Conn_01x04_Male J3
U 1 1 63088D88
P 6050 4350
F 0 "J3" H 6150 4550 50  0000 R CNN
F 1 "MQ3-4P" H 5775 4525 50  0000 R CNN
F 2 "" H 6050 4350 50  0001 C CNN
F 3 "~" H 6050 4350 50  0001 C CNN
	1    6050 4350
	-1   0    0    -1  
$EndComp
$Comp
L samac_2:PIC16F18326-I_P IC1
U 1 1 62C9C962
P 3475 3175
F 0 "IC1" H 4425 3440 50  0000 C CNN
F 1 "PIC16F18326-I_P" H 4425 3349 50  0000 C CNN
F 2 "DIP781W56P254L1918H533Q14N" H 5225 3275 50  0001 L CNN
F 3 "http://uk.rs-online.com/web/p/products/1241554P" H 5225 3175 50  0001 L CNN
F 4 "MCU,PIC16F18326,28KB Flash,XLP,DIP14" H 5225 3075 50  0001 L CNN "Description"
F 5 "5.334" H 5225 2975 50  0001 L CNN "Height"
F 6 "1241554P" H 5225 2875 50  0001 L CNN "RS Part Number"
F 7 "http://uk.rs-online.com/web/p/products/1241554P" H 5225 2775 50  0001 L CNN "RS Price/Stock"
F 8 "Microchip" H 5225 2675 50  0001 L CNN "Manufacturer_Name"
F 9 "PIC16F18326-I/P" H 5225 2575 50  0001 L CNN "Manufacturer_Part_Number"
	1    3475 3175
	1    0    0    -1  
$EndComp
Wire Notes Line
	6050 4700 6050 4675
Wire Notes Line
	6675 4700 6050 4700
Wire Notes Line
	6675 4125 6675 4700
Wire Notes Line
	6050 4125 6675 4125
Wire Notes Line
	6050 4175 6050 4125
Wire Wire Line
	5725 4250 5850 4250
Wire Wire Line
	5725 3475 5725 4250
Wire Wire Line
	5675 4450 5675 4725
Wire Wire Line
	5850 4450 5675 4450
$Comp
L power:GND #PWR07
U 1 1 62B7E9B6
P 5675 4725
F 0 "#PWR07" H 5675 4475 50  0001 C CNN
F 1 "GND" H 5680 4552 50  0000 C CNN
F 2 "" H 5675 4725 50  0001 C CNN
F 3 "" H 5675 4725 50  0001 C CNN
	1    5675 4725
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR06
U 1 1 62B7E345
P 5375 4550
F 0 "#PWR06" H 5375 4400 50  0001 C CNN
F 1 "+5V" H 5390 4723 50  0000 C CNN
F 2 "" H 5375 4550 50  0001 C CNN
F 3 "" H 5375 4550 50  0001 C CNN
	1    5375 4550
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D2
U 1 1 630AAFD6
P 6000 3900
F 0 "D2" H 5775 3950 50  0000 C CNN
F 1 "RED" H 6125 3950 50  0000 C CNN
F 2 "" H 6000 3900 50  0001 C CNN
F 3 "~" H 6000 3900 50  0001 C CNN
	1    6000 3900
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR011
U 1 1 630AD8AD
P 6625 3625
F 0 "#PWR011" H 6625 3475 50  0001 C CNN
F 1 "+5V" H 6640 3798 50  0000 C CNN
F 2 "" H 6625 3625 50  0001 C CNN
F 3 "" H 6625 3625 50  0001 C CNN
	1    6625 3625
	1    0    0    -1  
$EndComp
Wire Wire Line
	5375 3575 5625 3575
Wire Wire Line
	5625 3575 5625 3675
Wire Wire Line
	5625 3675 5850 3675
Wire Wire Line
	5850 3900 5550 3900
Wire Wire Line
	5550 3900 5550 3675
Wire Wire Line
	5550 3675 5375 3675
$Comp
L Device:R_Small R2
U 1 1 630B11BB
P 6375 3675
F 0 "R2" V 6300 3650 50  0000 C CNN
F 1 "1K" V 6375 3675 39  0000 C CNN
F 2 "" H 6375 3675 50  0001 C CNN
F 3 "~" H 6375 3675 50  0001 C CNN
	1    6375 3675
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R3
U 1 1 630B1881
P 6375 3900
F 0 "R3" V 6300 3875 50  0000 C CNN
F 1 "1K" V 6375 3900 39  0000 C CNN
F 2 "" H 6375 3900 50  0001 C CNN
F 3 "~" H 6375 3900 50  0001 C CNN
	1    6375 3900
	0    1    1    0   
$EndComp
Wire Wire Line
	6150 3675 6275 3675
Wire Wire Line
	6150 3900 6275 3900
Wire Wire Line
	6475 3900 6625 3900
Wire Wire Line
	6625 3900 6625 3675
Wire Wire Line
	6625 3675 6475 3675
Connection ~ 6625 3675
Wire Wire Line
	6625 3675 6625 3625
$EndSCHEMATC
