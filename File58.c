#include<stdio.h>
int main(){

    int main[5]={10,15,2,4,7};
    int index;
    int data;

    for(int i=0;i<=5;i++){
        printf("%d",data[i]);
    }
    printf("\nENTER THE INDEX POSITION WHOSE VALUE IS TO BE DELETED !\n");
    scanf("%d",&index);

    for(int i=index;i<5;i++){
        data[i]=data[i+1];
    }

}