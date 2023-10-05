// WAP to print HELLO WORLD for n number of time without using any loop //


#include<stdio.h>
int main (){
    int n;
    l1:
    printf("Enter the number");
    scanf("%d",&n);
    if (n!=-1){
        printf("HELLO WORlD");
        goto l1;
    }
    else{

        printf("stop");

    }
}