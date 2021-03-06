/*
 * Author: Harry van Haaren 2014
 *         harryhaaren@gmail.com
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef OPENAV_FABLA2_PORTS_HXX
#define OPENAV_FABLA2_PORTS_HXX

namespace Fabla2
{

typedef enum
{
  // Atom
  ATOM_IN = 0,
  ATOM_OUT,
  
  // Audio
  INPUT_L,
  INPUT_R,
  
  OUTPUT_L,
  OUTPUT_R,
  
  AUXBUS1_L,
  AUXBUS1_R,
  AUXBUS2_L,
  AUXBUS2_R,
  AUXBUS3_L,
  AUXBUS3_R,
  AUXBUS4_L,
  AUXBUS4_R,
  
  MASTER_VOL,
  MASTER_PITCH,
  RECORD_OVER_LAST_PLAYED_PAD,
  
  PORT_COUNT
} Fabla2Ports;

}; // Fabla2

#endif // OPENAV_FABLA2_PORTS_HXX
