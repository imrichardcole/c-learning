#include "logger.h"
#include "calculator.h"

int add(int x, int y)
{
    log_message("Will now add some numbers");
    return x + y;
}