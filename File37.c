//Write a program in c to find the sum of n numbers using functions.
#include<stdio.h>
int sum(int a)
{
    int b=(a*(a+1))/2;
    printf("The Sum is:%d",b);
}
int main()
{
    int a=0;
    printf("Enter the value of A:");
    scanf("%d",&a);
    sum(a);
}