

// CopyRight Stephen Morrisson 2019
// All rights reserved.


#ifndef  __StateMachine_H__
#define __StateMachine_H__

#include "common.h"

template<class STATE>
class StateMachine : public SemBase
{
 public:
  StateMachine() {}
  virtual ~StateMachine() {}

  virtual STATE getState() { return m_state; }
  virtual STATE setState(STATE newState) { m_state = newState; return m_state; }
  
 private:
  STATE m_state;
};


#endif //  __StateMachine_H__

