#include <stdio.h>
int main() {

  int i, n;

  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;
  
  printf("%d", t2);

  for (i = 2; i <= 5; i++) 
  {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
