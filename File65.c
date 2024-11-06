//Euler's method
#include<stdio.h>
//define f(x,y)
float fun(float x,float y){
  return (x+y);
}
int main() {
    float x0, y0, x, h, y;
    int n;
    printf("Enter the value of x0:\n");
    scanf("%f", &x0);
    printf("Enter the value of y0:\n");
    scanf("%f", &y0);
    printf("Enter the value of x:\n");
    scanf("%f", &x);
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    h = (x - x0) / n;
    printf("The value of h %f\n", h);
    for (int i = 1; i <=n; i++) {
        x = x0 + h;
        y = y0 + h * fun(x0, y0);
        x0 = x;
        y0 = y;
    }
    printf("Value of y0 is %f\n", y0);
}