#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char student_id[11];
    unsigned mark;
} STUDENT;

int main() {
    int number_of_students = 3, i;
    int quit;
    STUDENT students[] = {};

    char *names[] = {"Alice", "Bob", "Charles"};
    char *ids[] = {"1234567890", "0987654321", "1029384756"};
    unsigned marks[] = {85, 78, 91};

    for (i = 0; i < number_of_students; i++) {
        strcpy(students[i].name, names[i]);
        strcpy(students[i].student_id, ids[i]);
        students[i].mark = marks[i];
    }

    // for (i = 0; i < number_of_students; i++) {
    //     printf("Enter the student's name, ID, and mark: \n");
    //     scanf("%s", students[i].name);
    //     scanf("%s", students[i].student_id);
    //     scanf("%u", &students[i].mark);
    // }

    for (i = 0; i < number_of_students; i++) {
        printf("------------------\n");
        printf("Student name: " "%s\n", students[i].name);
        printf("Studnet ID: " "%s\n", students[i].student_id);
        printf("Final mark: " "%u\n", students[i].mark);
    }
    printf("------------------\n");
    return 0;
}