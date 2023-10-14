//Write a program in c to print the fibonacci pattern using function.
#include <stdio.h>
int pattern(int row)
{
    int temp1=1,temp2=1,backup=0;
    for(int i=1;i<=row;i++)
    {
        for(int j=0;j<temp1;j++)
        {
            printf("* ");
        }
        printf("\n");
        backup=temp2;
        temp2=temp1+temp2;
        temp1=backup;
    }
}
int main()
{
    int row;
    printf("Limit:\n");
    scanf("%d",&row);
    pattern(row);
}
