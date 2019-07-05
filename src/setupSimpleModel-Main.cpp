// CopyRight Stephen Morrisson 2017
// All rights reserved.


#include "common.h"
#include "SimpleModel.h"


int main(int argc, const char** argv)
{
  cout << "genApp V0.0" << endl;

  SimpleModel* model = new SimpleModel();
  
  int result = -1;
  //int result = that.RunMain();

  if (result != 0)
    {
      cout << endl << "returned: " << result << endl;
    }

  return result;
}
