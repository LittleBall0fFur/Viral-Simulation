#pragma once

#include "movement_strategy.h"

namespace corsim
{
  class RegularMovementStrategy: public MovementStrategy {
    public:
      //Move subject normally
      void move_subject(Subject& s, const double delta_time) override;
      //Return instance of strategy
      static MovementStrategy& get_instance();
    private:
      //Default constructor
      RegularMovementStrategy() = default;
  };
};
