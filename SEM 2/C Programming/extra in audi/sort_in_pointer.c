#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    float percentage;
    int age;
};

void sortStudents(struct student arr[], int n)
{
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct student students[N];

    for (int i = 0; i < N; i++) {
        printf("Enter name, percentage, and age of student %d: ", i + 1);
        scanf("%s %f %d", students[i].name, &students[i].percentage, &students[i].age);
    }

    sortStudents(students, N);

    printf("\nStudent Data Sorted Alphabetically:\n");
    for (int i = 0; i < N; i++) {
        printf("Name: %s, Percentage: %.2f, Age: %d\n", students[i].name, students[i].percentage, students[i].age);
    }

    return 0;
}
