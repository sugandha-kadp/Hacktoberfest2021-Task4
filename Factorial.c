#include<stdio.h>

int main(void)
{
 int no;
 long fac;

 printf( "Enter a Number : ");
 scanf( "%d",&no);

 fac = 1;

  for (int r=no; r >= 1; r--)
  {
    fac = fac * r;
  }

printf( "Factorial of %d is %ld\n" ,no, fac);
 return 0;
 
}
