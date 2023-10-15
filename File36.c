//Write a program in c to find the greatest number between two numbers using functions.
#include<stdio.h>
int greater(int a,int b)
{
    if(a>b)
        printf("The greatest value is A");
    else
        printf("The greatest value is B");
}
int main()
{
    int a=0,b=0;
    printf("Enter the value of A and B:");
    scanf("%d %d",&a,&b);
    greater(a,b);
}
