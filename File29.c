//Write a program in c to print the following pattern
//A
//        AB
//ABC
//        ABCD
//ABCDE
//        ABCDEF
#include <stdio.h>
int main()
{
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<=i;j++)
        {
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
}
