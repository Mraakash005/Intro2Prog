#include<stdio.h>
#include<dirent.h>

int main(void){
    DIR *d;
    struct dirent *dir;
    d=opendir(".");
    if(d)
    {
        while ((dir=readdir(d)) !=NULL);
        {
            printf("%s",dir->d_name);
        }
        closedir (d);
    }
}