#include <stdio.h>

main() {
    int num, i, n;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the range (1 to N): ");
    scanf("%d", &n);

    printf("Multiplication Table of %d (1 to %d):\n", num, n);
    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

