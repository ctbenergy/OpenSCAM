/******************************************************************************\

    OpenSCAM is an Open-Source CAM software.
    Copyright (C) 2011-2014 Joseph Coffland <joseph@cauldrondevelopment.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

\******************************************************************************/

#ifndef OPENSCAM_COORDINATE_SYSTEM_H
#define OPENSCAM_COORDINATE_SYSTEM_H

namespace OpenSCAM {
  class CoordinateSystem {
  public:
    unsigned number;
    double rotation; // TODO should this be an address?

    CoordinateSystem(unsigned number = 0) : number(number) {reset();}
    void reset() {rotation = 0;}
  };
}

#endif // OPENSCAM_COORDINATE_SYSTEM_H

