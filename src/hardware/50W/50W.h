/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef imaxB6_original_H_
#define imaxB6_original_H_

#include "imaxB6.h"

#define MAX_CHARGE_V            ANALOG_VOLT(25.300) //25.3V
#define MAX_CHARGE_I            ANALOG_AMP(6.000)   //5A
#define MAX_CHARGE_P            ANALOG_WATT(50.000)               //50W

#define MAX_DISCHARGE_P         ANALOG_WATT(5.000)                //5W
#define MAX_DISCHARGE_I         ANALOG_AMP(1.000)   //should be 1A


//1-13? correlation
//#define SMPS_UPPERBOUND_VALUE               (MAX_CHARGE_I*13)
//#define MAX_CALIBRATION_SMPS_VALUE          (SMPS_UPPERBOUND_VALUE/4)
//#define DISCHARGER_UPPERBOUND_VALUE         TIMERONE_PRECISION_PERIOD
//#define MAX_CALIBRATION_DISCHARGER_VALUE    DISCHARGER_UPPERBOUND_VALUE

#define CALIBRATION_SPEED                   10

//start warning-text
//#define TESTINGALERT

//loudness programcomplete
//#define LOUDSOUND

//Lixx withoutbalancer
#define CHARGE_LIXX_WITHOUT_BALANCER

//prevent power supply
//#define MAX_CURRENT_RISING ANALOG_AMP(1.000)


//screenanimation
//#define SCREENANIMATION

//knightrider effect is ADC working
//#define KNIGHTRIDEREFFECT

//use RAMCG battery icons for hitachi HD44780
//#define RAM_CG

#endif /* imaxB6_original_H_ */