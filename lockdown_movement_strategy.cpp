#include "lockdown_movement_strategy.h"

namespace corsim
{
  MovementStrategy& LockdownMovementStrategy::get_instance(){
    static LockdownMovementStrategy instance;
    return instance;
  }

  void LockdownMovementStrategy::move_subject(Subject& s, const double delta_time) {
    if(subject_should_move())
      s.position += s.velocity * delta_time;
  }

  bool LockdownMovementStrategy::subject_should_move()  {
    return _distribution(_generator);
  }
};
