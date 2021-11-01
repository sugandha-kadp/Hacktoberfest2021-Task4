//C program to find factorial of a number
//C input:
#include <stdio.h>
int main()

{
    int i,fact=1,num;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }

    printf("Factorial of %d is %d\n", num,fact);
   return 0;
}

//code output:
//Enter a number: 8
//Factorial of 8 is 40320
//
