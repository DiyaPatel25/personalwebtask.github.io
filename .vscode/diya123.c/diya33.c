#include <stdio.h>

int main(void) {
  int a[5], i;
  for (i = 1; i <= 5; i++) {
    printf("\n Enter Value in Array at Position [%d] :", i);
    scanf("%d", & a[i]);
  }
  for (i = 1; i <=5; i++) {
    if (a[i] % 2 == 0) {
      printf("\n %d is an EVEN number.", a[i]);
    } else {
      printf("\n %d is an ODD number.", a[i]);
    }
  }
  return 0;
}

