#include<stdio.h>
int main()
{
    int a,b,n,c,i;
    a=1;
    b=1;
    printf("enter the range\n");
    scanf("%d",&n);
    printf("%d\n%d",a,b );
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;

    }
    return 0;
}
