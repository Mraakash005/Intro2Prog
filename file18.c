//Printing fibonacci series
#include<stdio.h>

void fibo() {
    int ep, sp = 0, sp1 = 1, sm = 0;
    printf("Enter ending point: ");
    scanf("%d", &ep);
    while (sm <= ep) {
        printf("\n%d", sm);
        sp = sp1;
        sp1 = sm;
        sm = sp1 + sp;
    }
}
    int main()
    {
fibo();
    }
