//Find factorial of a number using function(return value)//
#include<stdio.h>
int fac(){
    int n,i=1,mul=1;
    printf("Enter range: ");
    scanf("%d",&n);
    while(i<=n)
    {
        mul*=i;
        i++;
    }
    printf("Factorial is: %d",mul);
}
int main()
{
    fac();
    return 0;
}
