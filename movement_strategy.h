#pragma once

#include "vector2.h"
#include "subject.h"

namespace corsim
{
  class Subject;
  //Base class for movement strategies
  class MovementStrategy {
    public:
      //Virtual movement function
      virtual void move_subject(Subject& s, const double delta_time) = 0;
      //Virtual default destructor
      virtual ~MovementStrategy() = default;
    private:
  };
};
