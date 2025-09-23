#include <stdio.h>
#include <time.h>

unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) fact *= i;
    return fact;
}

unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) return 1ULL;
    return (unsigned long long)n * factorial_recursive(n - 1);
}

main() {
    int n;
    clock_t start, end;
    double sec;

    printf("Enter a number (<=20 recommended): ");
    scanf("%d", &n);

    start = clock();
    printf("Factorial (Iterative) = %llu\n", factorial_iterative(n));
    end = clock();
    sec = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken by Iterative = %f seconds\n", sec);

    start = clock();
    printf("Factorial (Recursive) = %llu\n", factorial_recursive(n));
    end = clock();
    sec = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken by Recursive = %f seconds\n", sec);
}

