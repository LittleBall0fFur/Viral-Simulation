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

#include "subject.h"
#include "regular_movement_strategy.h"
#include <math.h>

namespace corsim
{

Subject::Subject(int x, int y, int radius, bool infected)
{
    this->_radius = radius;
    this->_infected = infected;

    position = Vector2(x, y);
    velocity = Vector2(0, 0);

    _strategy = &RegularMovementStrategy::get_instance();
}

void Subject::set_strategy(MovementStrategy& strategy){
  _strategy = &strategy;
}

void Subject::move(double dt){
  _strategy->move_subject(*this, dt);
}

int Subject::radius()
{
    return this->_radius;
}

bool Subject::infected()
{
    return this->_infected;
}

void Subject::infect()
{
    this->_infected = true;
}

double Subject::angle()
{
    return atan2(velocity.y, velocity.x);
}

double Subject::speed()
{
    return sqrt(velocity.x * velocity.x + velocity.y * velocity.y);
}

}
