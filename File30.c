//Write a program in c to implement call by value in function.
#include<stdio.h>
int imp(int a)
{
    printf("%d",a);
}

int main()
{
    int a=3;
    printf("%d\n",a);
    printf("Enter Number: ");
    scanf("%d", &a);
    imp(a);
}