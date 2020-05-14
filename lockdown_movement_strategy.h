#pragma once

#include "movement_strategy.h"

namespace corsim
{
  class LockdownMovementStrategy: public MovementStrategy {
    public:
      //Move according to selection status
      void move_subject(Subject& s, const double delta_time) override;
      //Return instance of strategy
      static MovementStrategy& get_instance();
    private:
      //Default constructor
      LockdownMovementStrategy() = default;
  };
};
