#include<stdio.h>

void main()
{
 int i, n, fact=1;
 printf("Enter the number:");
 scanf("%d",&n);
 for(i = 1;i <= n;i++)
    fact= fact*i;
  printf("Factorial of number %d is:%d",n,fact);
}
