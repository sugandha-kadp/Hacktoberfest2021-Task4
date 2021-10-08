#include<stdio.h>

int main(){
	int n,fact=1,i;
	
	printf("Enter a Number - ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact = fact*i;
	}
	
	printf("Factorial of the Number - %d is %d ",n,fact);
	
	return 0;
	
}

