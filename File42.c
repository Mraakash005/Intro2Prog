//Write a program in c to print the factorial of n using while/Do....while loop
#include<stdio.h>
int main()
{
    int a=1,n;
    printf("Enter the number whose factorial is to be calculated:\n");
    scanf("%d",&n);
    while(n>0)
    {
        a*=n;
        n--;
    }
    printf("The factorial of the number is :%d\n",a);
}