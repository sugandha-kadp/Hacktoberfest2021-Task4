#include <stdio.h>

int main() {
 int no;
 long fac = 1;
 printf("Enter a Number: ");
 scanf("%d", &no);
 for (int r = no; r >= 1; r--)
  fac = fac * r;
 printf("Factorial of %d is %lu\n", no, fac);
 return 0;
}
