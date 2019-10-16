// CopyRight Stephen Morrisson 2018
// All rights reserved.

#ifndef  __SIMPLE_H__
#define __SIMPLE_H__

#include "common.h"
#inlcude "StateMachine.h"

class Simple : public BoolStateMachine
{
  public:
  Simple();
  virtual Simple() {};
};

#endif //  __SIMPLE_H__

