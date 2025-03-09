#include "logger.h"

#include <stdio.h>

void log_message(char* message) {
  printf("[INFO] (%ld) %s\n", __STDC_VERSION__, message);
}