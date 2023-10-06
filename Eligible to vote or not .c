// WAP to check the person is eligible to vote ot not//


#include<stdio.h>
int main(){
    int y;
    printf("ENTER THE AGE:");
    scanf("%d",&y);

    if(y>=18)
        printf("person is eligible to vote");
    else
        printf("person is not eligible to vote");

    return 0;
}