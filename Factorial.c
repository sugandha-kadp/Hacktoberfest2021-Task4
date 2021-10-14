#include <stdio.h>

int main(){
  int i;
  int fact = 1;
  int number;

  printf("ENter a number : ");
  scanf("%d", &number);
  
  for(i=1; i<=number; i++){
    fact = fact*i;
  }

  printf("Factorial of %d is : %d", number, fact);

  return 0;
}
