#include <stdio.h>

int factorial(int n);   // Function declaration

main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);   // Function call

    printf("Factorial of %d = %d\n", num, result);
}

int factorial(int n) {   // Function definition
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

