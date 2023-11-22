#include<stdio.h>
int main(){


    FILE *fp;
    char data[100];
    fp=fopen("File54.c","r");

    if(fp!=NULL){
        printf("FILE OPENED !");
        fgets(data,100,fp);
        printf("%s",data);
    }
    else{
        printf("error !");
    }
}