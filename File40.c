//Write a program in c to find the factorial using function.
#include <stdio.h>
int fact(int n)
{
    int a=1;
    while(n>0)
    {
        a=a*n;
        n--;
    }
    return a;
}
int main()
{
    int n=0;
    printf("Enter the number to get the factorial of:");
    scanf("%d",&n);
    int b=fact(n);
    printf("The factorial of %d is:%d",n,b);
}