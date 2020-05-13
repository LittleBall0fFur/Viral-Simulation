#pragma once

#include "vector2.h"
#include "subject.h"

namespace corsim
{
  class Subject;
  class MovementStrategy {
    public:
      virtual void move_subject(Subject& s, const double delta_time) = 0;
      virtual ~MovementStrategy() = default;
    private:
  };
};
