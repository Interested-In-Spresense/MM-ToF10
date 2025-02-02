/*
 *  OneDMesure.ino - One-dimensional distance measurement sample
 *  Author Interested-In-Spresense
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "MM-ToF10.h"

void setup()
{
  Serial.begin(115200);
  MMToF10.begin();
  MMToF10.sync();

  MMToF10.nomal(ShortDistance,LowSpeed);

}

void loop()
{
  static  int ledr = 0;
  static  int ledg = 0;
  static  int ledb = 0;

  int32_t dis = MMToF10.get();

  MMToF10.led(ledr,ledg,ledb);
  printf("dis=%ld(mm)\n",dis);

  // LED color
  int i = dis & 0xff;
  switch (dis >> 8) {
    default:
      ledr = ledg = ledb = 0;
      break;
    case    6:
      ledr = 0;
      ledg = 0;
      ledb = 255 - i;
      break;
    case    5:
      ledr = 0;
      ledg = 255 - i;
      ledb = 255;
      break;
    case    4:
      ledr = 0;
      ledg = 255;
      ledb = i;
      break;
    case    3:
      ledr = 255 - i;
      ledg = 255;
      ledb = 0;
      break;
    case    2:
      ledr = 255;
      ledg = i;
      ledb = 0;
      break;
    case    1:
      ledr = 255;
      ledg = 0;
      ledb = 255 - i;
      break;
    case    0:
      ledr = 255;
      ledg = 255 - i;
      ledb = 255;
      break;
    }

//    sleep(1);

}
