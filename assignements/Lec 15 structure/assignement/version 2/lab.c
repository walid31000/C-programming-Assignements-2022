#include <stdio.h>

#define MAX_NAME_LEN 50
#define NUM_STUDENTS 10

// Define a structure to hold student information
typedef struct {
    char name[MAX_NAME_LEN];
    int id;
    float grade;
} Student;

// Function to fill the student information with user input
void fillStudentInfo(Student *students) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter information for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]%*c", (students + i)->name); // Using pointer to struct

        printf("ID: ");
        scanf("%d", &(students + i)->id); // Using pointer to struct

        printf("Grade: ");
        scanf("%f", &(students + i)->grade); // Using pointer to struct

        printf("\n"); // Print a newline for better readability
    }
}

// Function to print student information
void printStudentInfo(Student *students) {
    printf("Student Information:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Name: %s, ID: %d, Grade: %.2f\n", 
               (students + i)->name, 
               (students + i)->id, 
               (students + i)->grade);
    }
}

int main() {
    // Declare an array of 10 Students
    Student students[NUM_STUDENTS];

    // Fill student information with user input
    fillStudentInfo(students);

    // Print student information
    printStudentInfo(students);

    return 0;
}
