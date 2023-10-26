#include <stdio.h>
#include <string.h> //Contains string handling functions

struct student {
    char name[20];
    char student_id[11];
    unsigned mark; // Unsigned integers
};

int main() {
    struct student new_student;
    strcpy(new_student.name, "Name Student"); // A better way of copying a string into a placeholder/variable
    strcpy(new_student.student_id, "13902178");
    
    new_student.mark = 35;

    // or
    
    printf("Enter your final mark: ");
    scanf("%u", &new_student.mark);

    printf("\nStudent name: " "%s\n", new_student.name);
    printf("Studnet ID: " "%s\n", new_student.student_id);
    printf("Final mark: " "%u\n", new_student.mark);

    return 0;
}