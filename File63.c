#include <stdio.h>

int main()
{
    FILE *fp;
    char data[100];
    fp= fopen("sourav07.txt","r");
    if(fp!=NULL){
        printf("file opened\n");
        fgets(data,100,fp);
        printf("%s",data);

    }
    else{
        printf("error");
    }
}