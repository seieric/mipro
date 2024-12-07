#include <stdio.h>
#include <stdlib.h>

typedef struct num {
  int num;
  struct num *prev;
} Num;

int main(void) {
  int n;
  Num *last = NULL;
  while (scanf("%d", &n) == 1) {
    if (n == -1)
      break;
    Num *num = (Num *)malloc(sizeof(num));
    num->num = n;
    num->prev = last;
    last = num;
  }

  while (last) {
    Num *num = last;
    printf("%d ", num->num);
    last = num->prev;
    free(num);
  }
  printf("-1\n");
  return 0;
}