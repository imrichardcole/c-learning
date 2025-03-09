#include "calculator.h"

#include "logger.h"

int add(int x, int y) {
  log_message("Will now add some numbers");
  return x + y;
}