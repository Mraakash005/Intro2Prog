//Write a program in c to print your name n number of times by taking the value of n as an input from the user.
#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("My Name Is Akash!\n");
        a++;
    }
}