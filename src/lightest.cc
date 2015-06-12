#include "lightest.h"

namespace lightest {
void Update(bool& success, const bool test_result) {
  if (!test_result) {
    success = false;
  }
}
}
