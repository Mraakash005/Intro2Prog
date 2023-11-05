#include<stdio.h>

// Function to calculate the sum of divisors of a number
int sumofdivisors(int num){
    int sum = 1;
    for(int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    return sum;
}

// Function to check if two numbers are friendly (amicable) numbers
int areFriendlyNumbers(int num1, int num2){
    int sum1 = sumofdivisors(num1);
    int sum2 = sumofdivisors(num2);
    return (sum1 == num2 && sum2 == num1);
}

int main(){
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    if (areFriendlyNumbers(number1, number2)) {
        printf("%d and %d are friendly (amicable) numbers.\n", number1, number2);
    } else {
        printf("%d and %d are not friendly numbers.\n", number1, number2);
    }
    return 0;
}
