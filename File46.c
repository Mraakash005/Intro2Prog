#include<stdio.h>
int main(){
    int rows=0,cols=0;
    printf("ENTER THE NO. OF ROWS:\n");
    scanf("%d",& rows);
    printf("ENTER THE NO. OF COLS:\n");
    scanf("%d",& cols);
    int arr[rows] [cols];
    for(int i=0;i<rows;i++){
        for(int j=0;  cols;j++){
            printf("ENTER THE ELEMENT IN ROWS:%d column: %d",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("\n");
        }
    }
}