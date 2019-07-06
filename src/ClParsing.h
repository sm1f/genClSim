// CopyRight Stephen Morrisson 2019
// All rights reserved.


#ifndef  __ClParsing_H__
#define __ClParsing_H__

#include "common.h"


class ClResults {
 public:
  ClResults();
  virtual ~ClResults();
};
typedef std::shared_ptr<ClResults> ClResultsP;

class ClParsing
{
 public:
  ClParsing();
  virtual ~ClParsing();
  virtual ClResultsP parseCommandLine(int argc, string argv[]);
};
typedef std::shared_ptr<ClParsing> ClParsingP;


#endif //  __ClParsing_H__

