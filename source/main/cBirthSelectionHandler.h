/*
 *  cBirthSelectionHandler.h
 *  Avida
 *
 *  Created by David Bryson on 4/1/09.
 *  Copyright 2009-2011 Michigan State University. All rights reserved.
 *
 *
 *  This file is part of Avida.
 *
 *  Avida is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 *  Avida is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License along with Avida.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef cBirthSelectionHandler_h
#define cBirthSelectionHandler_h

namespace Avida {
  class cGenome;
};

class cAvidaContext;
class cBirthChamber;
class cBirthEntry;
class cOrganism;

using namespace Avida;


class cBirthSelectionHandler
{
public:
  cBirthSelectionHandler() { ; }
  virtual ~cBirthSelectionHandler() = 0;
  
  virtual cBirthEntry* SelectOffspring(cAvidaContext& ctx, const cGenome& offspring, cOrganism* parent) = 0;
};

#endif
