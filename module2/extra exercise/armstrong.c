#include <stdio.h>
#include <math.h>

main() {
    int num, original, remainder, n, i;
    double result;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        original = num;
        n = 0;
        result = 0.0;

        // count digits
        while (original != 0) {
            original /= 10;
            n++;
        }

        original = num;

        // calculate sum of powers of digits
        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, n);
            original /= 10;
        }

        if ((int)result == num)
            printf("%d\n", num);
    }
}

