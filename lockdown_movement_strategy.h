#pragma once

#include "movement_strategy.h"

#include <iostream>
#include <random>

namespace corsim
{
  class LockdownMovementStrategy: public MovementStrategy {
    public:
      void move_subject(Subject& s, const double delta_time) override;
      static MovementStrategy& get_instance();
    private:
      LockdownMovementStrategy() = default;
      bool subject_should_move();

      constexpr static double movement_threshold = 0.75;

      std::default_random_engine _generator{};
      std::bernoulli_distribution _distribution{movement_threshold};
  };
};
