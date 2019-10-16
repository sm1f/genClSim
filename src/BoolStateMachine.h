// CopyRight Stephen Morrisson 2019
// All rights reserved.

#ifndef  __BoolStateMachine_H__
#define __BoolStateMachine_H__

#include "common.h"
#include "StateMachine.h"


class BoolStateMachine<STATE> : public StateMachine<State>
{
 public:
  BoolStateMachine();
  virtual ~BoolStateMachine() {}
};

#endif //  __BoolStateMachine_H__

