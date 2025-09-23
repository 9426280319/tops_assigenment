#include <stdio.h>

// Recursive Method
int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative Method
int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Nth Fibonacci number using Recursive method = %d\n", fibonacci_recursive(n));
    printf("Nth Fibonacci number using Iterative method = %d\n", fibonacci_iterative(n));

    printf("\nEfficiency Note:\n");
    printf("Recursive method is slower (exponential time) for large N because it recalculates values many times.\n");
    printf("Iterative method is faster (linear time) as it computes step by step without repetition.\n");
}

