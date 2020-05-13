#pragma once

#include "movement_strategy.h"

namespace corsim
{
  class LockdownMovementStrategy: public MovementStrategy {
    public:
      void move_subject(Subject& s, const double delta_time) override;
      static MovementStrategy& get_instance();
    private:
      LockdownMovementStrategy() = default;
  };
};
