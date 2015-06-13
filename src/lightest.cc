#include "lightest/lightest.h"

#include <cstdlib>

namespace lightest {
void Update(bool& success, const bool test_result) {
  if (!test_result) {
    success = false;
  }
}

int ToExitStatus(const bool success) {
  return success ? EXIT_SUCCESS : EXIT_FAILURE;
}
}
