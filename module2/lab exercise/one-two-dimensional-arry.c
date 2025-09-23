#include <stdio.h>

main() {
    int arr1[5], i;
    int arr2[3][3], r, c, sum = 0;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\n1D Array Elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n\nEnter elements of 3x3 matrix:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &arr2[r][c]);
            sum += arr2[r][c];
        }
    }

    printf("\n2D Array Elements (3x3 Matrix):\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", arr2[r][c]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in 2D array = %d\n", sum);
}

