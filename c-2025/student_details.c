#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Student {
    int roll_number;
    char name[50];
    int num_subjects;
    float *marks;   // Pointer for dynamic allocation of marks
};

int main() {
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamic memory allocation for n students
    struct Student *students;
    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details for each student
    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter number of subjects: ");
        scanf("%d", &students[i].num_subjects);

        // Dynamic allocation for marks
        students[i].marks = (float *)malloc(students[i].num_subjects * sizeof(float));

        if (students[i].marks == NULL) {
            printf("Memory allocation failed for marks!\n");
            return 1;
        }

        for (j = 0; j < students[i].num_subjects; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Calculate and display average marks
    printf("\n===== Student Averages =====\n");

    for (i = 0; i < n; i++) {
        float sum = 0;

        for (j = 0; j < students[i].num_subjects; j++) {
            sum += students[i].marks[j];
        }

        float average = sum / students[i].num_subjects;

        printf("\nRoll Number: %d", students[i].roll_number);
        printf("\nName: %s", students[i].name);
        printf("\nAverage Marks: %.2f\n", average);
    }

    // Free allocated memory
    for (i = 0; i < n; i++) {
        free(students[i].marks);
    }
    free(students);

    return 0;
}