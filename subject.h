// Corona Simulation - basic simulation of a human transmissable virus
// Copyright (C) 2020  wbrinksma

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <string>
#include "vector2.h"
#include "movement_strategy.h"

namespace corsim
{
class MovementStrategy;
/**
 * A subject is an entity within the simulation. It is modeled as a
 * circle in 2D and can be infected.
 */
class Subject
{
    public:
        Subject(int x, int y, int radius, bool infected);

        int radius(){ return this->_radius; }; //Radius needed for collisions
        bool infected(){ return this->_infected; };
        void infect();
        double angle();
        double speed();
        //Switch between movement strategy
        void set_strategy(int strategy_type);
        //Set selection status
        void set_selected(bool b);
        const bool get_selected(){ return this->_selected; };
        void move(double dt);

        //Vector2 for movement
        Vector2 position;
        Vector2 velocity;
    private:
      bool _selected = false;
      bool _infected = false;
      int _radius = 0;
      //The current movement strategy
      MovementStrategy* _strategy;

};

};
