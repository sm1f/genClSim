// CopyRight Stephen Morrisson 2017
// All rights reserved.


#include "common.h"
#include "Simple.h"
#include "StateMachine.h"

enum class TestMachineState { Stopped, Starting, Running, Stopping };

class TestMachine : public StateMachine<TestMachineState>
{
public:  
  TestMachine();
  ~TestMachine() {};

  TestMachineState currentState();

  int count() { return m_count; }
  int version() { return m_version; }
private:
  TestMachineState m_state;
  int m_count;
  int m_version;
};

TestMachineState TestMachine::currentState()
{
  return m_state;
}

TestMachine::TestMachine()
  : StateMachine<TestMachineState>(),
  m_state(TestMachineState::Stopped),
  m_count(0),
  m_version(1)
{}


int main(int argc, const char** argv)
{
  TestMachine* machine = new TestMachine();
  int version = machine->version();
  cout << endl << " machine.version: " << version << endl;
  return version;
}
