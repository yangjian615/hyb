/** This file is part of the HYB simulation platform.
 *
 *  Copyright 2014- Finnish Meteorological Institute
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef VIS_DATA_SOURCE_SIMULATION_H
#define VIS_DATA_SOURCE_SIMULATION_H

#include <memory>
#include <string>
#include <vector>
#include "cpp_utils.h"
#include "container.h"
#include "vis_data_source.h"
#include "../grid.h"
#include "../params.h"
#include "../templates.h"

class SimulationVisDataSourceImplPrivate;

//! Implemantation of interface VisDataSource
class SimulationVisDataSourceImpl : public VisDataSource
{
public:
    SimulationVisDataSourceImpl(const Params& p, const Tgrid& g);
    virtual ~SimulationVisDataSourceImpl() { }
    virtual VisData getVisData() const;
private:
    //! SimulationVisDataSourceImpl uses "pimpl" idiom. This is pointer to actual implementation.
    SCopyPtr<SimulationVisDataSourceImplPrivate> pimpl;
};

//! Not implemented
class SimulationDumpSataSourceImpl : public DumpDataSource
{
};

#endif

