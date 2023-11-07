#include<stdio.h>
int main(){
    char name[]="HELLO";
    int count=0;
    for (int i=0;i<=5;i++){
        if(name[i]=='\0'){
            break;
        }else{
            count++;
        }
    }
    printf("%d",count);
}