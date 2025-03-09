#include <stdio.h>
#include "a.h"

int do_something(void);

int main()
{
    do_something();
    another_function();
    return 0;
}

int do_something() 
{
    printf("this is something, special\n");
    return 1;
}
