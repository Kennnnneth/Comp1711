#include <stdio.h>

struct student {
    char name[20];
    char student_id[11]; //Assuming up to 10 digits
    unsigned mark; // Unsigned integers
};

int main() {
    struct student new_student = {"Name Surname", .student_id = "28932123", 35}; // using .<identifier> is not necessary
    printf("Student name: " "%s\n", new_student.name);
    printf("Studnet ID: " "%s\n", new_student.student_id);
    printf("Final mark: " "%u\n", new_student.mark);

    return 0;
}