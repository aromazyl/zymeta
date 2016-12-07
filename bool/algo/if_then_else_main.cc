#include "IfThenElse.h"
#include <stdio.h>

using namespace meta;

struct printA {};
struct printB {};
int main() {
  using type = __if(BoolType<true>, printA, printB);
  return 0;
}
