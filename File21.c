#include<stdio.h>
int sum()
{
    int i = 1, sm = 0;
    while (i <= 20) {
        if (i % 2 != 0)
        {
            sm += i;
        }
        i++;
    }
    printf("Sum of first 20 odd numbers is: %d", sm);

}
int main()
{
    sum();
    return 0;
}