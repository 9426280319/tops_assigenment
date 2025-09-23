#include <stdio.h>

// Recursive function to calculate nCr
int combination(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    else
        return combination(n - 1, r - 1) + combination(n - 1, r);
}

main() {
    int n, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // spacing
        for (k = 0; k < n - i - 1; k++)
            printf("  ");

        for (j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }
}

