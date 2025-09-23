#include <stdio.h>

main() {
    int marks, gradeRange;

    printf("Enter marks of the student: ");
    scanf("%d", &marks);

    gradeRange = marks / 10;  

    switch (gradeRange) {
        case 10:
        case 9:
            printf("Grade A\n");
            break;
        case 8:
        case 7:
            if (marks > 75)
                printf("Grade B\n");
            else
                printf("Grade C\n");
            break;
        case 6:
        case 5:
            printf("Grade C\n");
            break;
        default:
            printf("Grade D\n");
    }
}

