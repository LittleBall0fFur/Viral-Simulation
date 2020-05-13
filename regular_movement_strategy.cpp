#include "regular_movement_strategy.h"

namespace corsim
{
  MovementStrategy& RegularMovementStrategy::get_instance(){
    static RegularMovementStrategy instance{};
    return instance;
  }

  void RegularMovementStrategy::move_subject(Subject& s, const double delta_time) {
      s.position += s.velocity * delta_time;
  }
};
