#include <stdio.h>

int main()
{
 int no;
 int fac;;

 printf("Enter a Number : ");
 scanf("%d",&no);

 fac = 1;

  for (int r=0; r<no; r++)
  {
    fac = fac*r +fac;
  }

 printf("Factorial of %d is %d",no,fac); 
 
}
