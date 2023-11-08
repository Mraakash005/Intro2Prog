#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the string");
    scanf("%d",&size);
    char arr[size];
    char rev[size];
    for(int i=1;i<=size;i++){
        printf("enter the value of element of index [%d]",i);

        scanf("%d",&arr[i]);
    }
    printf("direct order of the string ");
    for(int i=1;i<size;i++){
        printf("%c",arr[i]);
    }
//    printf("reverse order of the string ");
//    for(int i=size;i<0;i--){
//        printf("%c",arr[i]);
//    }

}