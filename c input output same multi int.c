#include <stdio.h>

int main() {

  int x[6];

  printf("Enter 6 integers: ");
  for(int i = 0; i < 6; i++) {
     scanf("%d", &x[i]);
  }

  printf("Displaying integers: ");
  for(int i = 0; i < 6; i++) {
     printf("%d\n", x[i]);
  }
  return 0;
}
