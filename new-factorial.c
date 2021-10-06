#include<stdio.h>

// I've changed the code a little haha
int main () {
    int n, i, mt, nMt;

    printf("Whats your number? ");
    scanf("%d", &n);

    mt = 1;
    for(i=n; i>0; i--){
        nMt = mt * i;
        mt = nMt;
    }

    printf("%d! = %d", n, mt);
}
