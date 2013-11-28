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

#include "AnalogInputs.h"

const AnalogInputs::DefaultValues AnalogInputs::inputsP_[AnalogInputs::PHYSICAL_INPUTS] PROGMEM = {
    {{0, 0},                        {55104, 25110}},    //Vout
    {{0, 0},                        {26613, 12518}},    //VreversePolarity
    {{709, 50},                        {9079, 1000}},    //Ismps
    {{2240, 50},                        {12293, 300}},    //Idischarge

    {{0, 0},                        {0, 0}},    //VoutMux
    {{0, 0},                        {0, 0}},    //Tintern
    {{0, 0},                        {42141, 12080}},    //Vin
    {{19650, 2980},                        {18700, 6000}},    //Textern

    {{0, 0},                        {48963, 3752}},    //Vb0_pin
    {{0, 0},                        {55022, 4187}},    //Vb1_pin
    {{0, 0},                      {56064, 8383}},  //Vb2_pin
    {{0, 0},                      {54976, 4183}},  //Vb3_pin

    {{0, 0},                      {54851, 4183}},  //Vb4_pin
    {{0, 0},                      {55555, 4182}},  //Vb5_pin
    {{0, 0},                      {54976, 4185}},  //Vb6_pin

    //1-1 correlation
    {{710, 50},                      {9080, 1000}},  //IsmpsValue
    {{240, 50},                      {1490, 300}},  //IdischargeValue
#ifdef ANALOG_INPUTS_V_UNKNOWN
    {{0, 0},                         {1, 1}},           //UNKNOWN0
    {{0, 0},                         {1, 1}},           //UNKNOWN1
#endif
};


