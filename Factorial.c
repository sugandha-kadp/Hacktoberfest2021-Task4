#include <stdio.h>

int main()
{
 int no;
 int fac;

 printf("Enter a Number : ");
 scanf("%d",&no);

 fac = 1;

  for (int r=no; r >= 1; r--)
  {
    fac = fac * r;
  }
  
 printf("\n");

 printf("Factorial of %d is %d", no,fac);

    return 0;
}
