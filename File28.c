//Write a program in c to print fibonacci series using function.
#include<stdio.h>
void fib(int r)
{
    int a=0, b=1, c;
    while (a<=r)
    {
        printf("%d\t", a);
        c = a+b;
        a = b;
        b = c;
    }
}

int main()
{
    int r;
    printf("Enter range: ");
    scanf("%d", &r);
    printf("The fibonacci series is: \n");
    fib(r);
}