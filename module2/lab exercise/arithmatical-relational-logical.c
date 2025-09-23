#include <stdio.h>

main() {
    int a, b;
    
    printf("Enter first integer: ");
    scanf("%d", &a);
    
    printf("Enter second integer: ");
    scanf("%d", &b);
    
    printf("\nArithmetic Operations:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    if (b != 0)
        printf("Division: %d\n", a / b);
    if (b != 0)
        printf("Modulus: %d\n", a % b);

    printf("\nRelational Operations:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    printf("\nLogical Operations:\n");
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);
    printf("!b: %d\n", !b);

}

