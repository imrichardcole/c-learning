#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *add(struct Node *node, int value) {
  struct Node *next = malloc(sizeof(struct Node));
  next->value = value;
  printf("pointer to new node is %p\n", next);
  node->next = next;
  return next;
}

int main(int argc, char const *argv[]) {
  struct Node a = {.value = 100};
  struct Node *next = add(&a, 200);
  struct Node *last = add(next, 500);
  return 0;
}
