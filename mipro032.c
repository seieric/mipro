#include <stdio.h>
#include <stdlib.h>

typedef struct num {
  int num;
  struct num *next;
} Num;

int main(void) {
  int n, i = 0;
  Num *prev = NULL, *first = NULL, *p1, *p2;

  while (scanf("%d", &n) == 1) {
    if (n == -1) {
      if (i == 0) {
        p1 = first;
      } else {
        p2 = first;
        break;
      }
      ++i;
      first = NULL;
      prev = NULL;
    } else {
      Num *num = (Num *)malloc(sizeof(num));
      num->num = n;
      if (prev) {
        prev->next = num;
      } else {
        first = num;
      }
      prev = num;
    }
  }

  while (1) {
    if (p1->num == p2->num) {
      printf("%d ", p1->num);
      if (p2->next && p1->next) {
        p1 = p1->next;
        p2 = p2->next;
      } else {
        break;
      }
    } else if (p1->num > p2->num) {
      if (p2->next) {
        p2 = p2->next;
      } else {
        break;
      }
    } else if (p1->num < p2->num) {
      if (p1->next) {
        p1 = p1->next;
      } else {
        break;
      }
    }
  }

  printf("-1\n");

  return 0;
}