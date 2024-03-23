#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person *personPtr;

    personPtr = (struct Person *)malloc(sizeof(struct Person));

    if (personPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", personPtr->name);
    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Person: %s, Age: %d\n", personPtr->name, personPtr->age);

    free(personPtr);
    return 0;
}

