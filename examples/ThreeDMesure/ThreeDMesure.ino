/*
 *  ThreeDMesure.ino - Three-dimensional distance measurement sample
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
  static  float data[8][4];

  float* ptr = (float*)data;

  MMToF10.get3d(ptr);

  for(int j=0;j<8;j++){
    for(int i=0;i<4;i++){
        printf("range[%d][%d]=%f[mm]\n",j,i,data[j][i]);
    }
  }
  
   printf("\n\n\n");
   usleep(10*1000);
}
