#include <stdio.h>

int factorial(int n);

int main() {
    int num;

    printf("Enter a number integer: ");
    scanf("%d", &num);

        if (num < 0) {
        printf("Factorial is not defined for numbers.\n");
    } else {
         int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }

   
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
