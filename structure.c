#include <stdio.h>

int main() {
    struct student {
        int roll_number;
        char name[50];
        int sub1_marks;
        int sub2_marks;
        int sub3_marks;
        float total;
        float percentage;
    };

    struct student stud[3];
    int i;

    printf("Enter information of 3 students:\n");

    for (i = 0; i < 3; i++) {
        printf("Enter roll number: ");
        scanf("%d", &stud[i].roll_number);

        printf("Enter name: ");
        scanf("%s", stud[i].name);

        printf("Enter marks scored in sub1 (out of 100): ");
        scanf("%d", &stud[i].sub1_marks);

        printf("Enter marks scored in sub2 (out of 100): ");
        scanf("%d", &stud[i].sub2_marks);

        printf("Enter marks scored in sub3 (out of 100): ");
        scanf("%d", &stud[i].sub3_marks);

        stud[i].total = stud[i].sub1_marks + stud[i].sub2_marks + stud[i].sub3_marks;
        stud[i].percentage = (stud[i].total / 300.0) * 100.0; // Calculate percentage out of 100
    }

    printf("\nStudent details:\n\n");
    printf("Roll No.\tName\tSub1\tSub2\tSub3\tTotal\tPercentage\n");

    for (i = 0; i < 3; i++) {
        printf("%d\t\t%s\t%d\t%d\t%d\t%.2f\t%.2f%%\n",
               stud[i].roll_number, stud[i].name,
               stud[i].sub1_marks, stud[i].sub2_marks, stud[i].sub3_marks,
               stud[i].total, stud[i].percentage);
    }

    return 0;
}
