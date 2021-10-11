#include <stdio.h>


int main(void)
{
  int no;
  long fac;

  printf("Enter a Number : ");
  scanf("%d",&no);

  fac = 1;

  for(int r = 2 ; r <= no ; r++){
    fac *= r;
  }  

  printf("Factorial of %d is %ld\n", no,fac); 
  
}
