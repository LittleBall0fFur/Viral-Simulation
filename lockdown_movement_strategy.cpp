#include "lockdown_movement_strategy.h"

namespace corsim
{
  MovementStrategy& LockdownMovementStrategy::get_instance(){
    static LockdownMovementStrategy instance;
    return instance;
  }

  void LockdownMovementStrategy::move_subject(Subject& s, const double delta_time) {
    if(s.get_selected()) s.position += s.velocity * (delta_time/8);
    else{ s.position += s.velocity * delta_time; }
  }
};
