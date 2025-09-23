#include <stdio.h>

main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("%d is a multiple of both 3 and 5\n", num);
    else
        printf("%d is NOT a multiple of both 3 and 5\n", num);
}

