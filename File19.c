/*
 *
 * *
 * * *
 * * * * *
 */
//To print pattern using '*' whose logic would be that of fibonacci number's.

#include<stdio.h>
int fibopattern()
{
    int i=1,j,a=0,b=1,sum=0;
    while(i<=5)
    {
        printf("\n");
        a=b;
        b=sum;
        sum= a+b;
        j=1;
        while(j<=sum)
        {
            printf("*");
            j++;
        }
        i++;
    }
}
int main()
{
    fibopattern();

}
