#include <stdio.h>

int main() {
  char* name = "Richard";

  char* first;
  first = &name[0];
  printf("decimal: %d\n", first);
  printf("hex    : 0x%x\n", first);

  char* another_first;
  another_first = name;
  printf("decimal: %d\n", another_first);
  printf("hex    : 0x%x\n", another_first);

  printf("decimal: %d\n", (another_first + sizeof(char)));
  printf("hex    : 0x%x\n", (another_first + sizeof(char)));

  return 0;
}
