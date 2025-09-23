#include <stdio.h>

main() {
    int num, sum = 0, reverse = 0, digit, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;      
        sum += digit;          
        reverse = reverse * 10 + digit;  
        num = num / 10;        
    }

    printf("Sum of digits of %d = %d\n", original, sum);
    printf("Reverse of %d = %d\n", original, reverse);
}

