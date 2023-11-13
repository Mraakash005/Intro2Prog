#include<stdio.h>
#include<string.h>
int main(){
    char name;
    int age;
    char email;
    printf("ENTER THE NAME:\n");
    scanf("%c",&name);
    printf("ENTER THE AGE:\n");
    scanf("%d",age);
    getchar();
    printf("ENTER THE MAIL ID:\n");
    scanf("%c",&email);
    printf("NAME: %C\n",name);
    printf("AGE: %d\n",age);
    printf("EMAIL:%c\n", email);
}