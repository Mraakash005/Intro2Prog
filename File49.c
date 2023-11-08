#include<stdio.h>
int main(){
    char name[]="sourav";
    int len= sizeof(name)/sizeof(char);
    printf("length of string 'name' is %d",(len-1));
}