#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_RECORDS 100

typedef struct {
    int id;
    char firstName[MAX_NAME_LEN];
    char lastName[MAX_NAME_LEN];
    float gpa;
} Student;

void addStudent(const char *filename);
void displayStudents(const char *filename);
void searchStudentById(const char *filename, int id);
void searchStudentByLastName(const char *filename, const char *lastName);
void sortStudentsByLastName(const char *filename);

int main() {
    const char *filename = "students.txt";
    int choice, id;
    char lastName[MAX_NAME_LEN];

    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Search Student by ID\n");
        printf("3. Search Student by Last Name\n");
        printf("4. Display Students Sorted by Last Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(filename);
                break;
            case 2:
                printf("Enter Student ID to search: ");
                scanf("%d", &id);
                searchStudentById(filename, id);
                break;
            case 3:
                printf("Enter Last Name to search: ");
                scanf("%s", lastName);
                searchStudentByLastName(filename, lastName);
                break;
            case 4:
                sortStudentsByLastName(filename);
                displayStudents(filename);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    system("pause");
    return 0;
}

void addStudent(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    
    Student s;
    printf("\nEnter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter First Name: ");
    scanf("%s", s.firstName);
    printf("Enter Last Name: ");
    scanf("%s", s.lastName);
    printf("Enter GPA: ");
    scanf("%f", &s.gpa);

    fprintf(file, "%d,%s,%s,%.2f\n", s.id, s.firstName, s.lastName, s.gpa);
    fclose(file);
    printf("Student added successfully.\n");
}

void displayStudents(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file or no students yet.\n");
        return;
    }
    
    Student s;
    printf("\n-------------------------------------------------\n");
    printf("%-10s %-15s %-15s %-5s\n", "ID", "First Name", "Last Name", "GPA");
    printf("-------------------------------------------------\n");
    
    while (fscanf(file, "%d,%[^,],%[^,],%f\n", &s.id, s.firstName, s.lastName, &s.gpa) == 4) {
        printf("%-10d %-15s %-15s %.2f\n", s.id, s.firstName, s.lastName, s.gpa);
    }
    
    printf("-------------------------------------------------\n");
    fclose(file);
}

void searchStudentById(const char *filename, int id) {
    FILE *file = fopen(filename, "r");
    if (!file) return;
    
    Student s;
    int found = 0;
    
    while (fscanf(file, "%d,%[^,],%[^,],%f\n", &s.id, s.firstName, s.lastName, &s.gpa) == 4) {
        if (s.id == id) {
            printf("\nStudent Found:\n");
            printf("----------------------------------\n");
            printf("ID: %d\n", s.id);
            printf("First Name: %s\n", s.firstName);
            printf("Last Name: %s\n", s.lastName);
            printf("GPA: %.2f\n", s.gpa);
            found = 1;
            break;
        }
    }
    
    if (!found) printf("Student not found.\n");
    fclose(file);
}

void searchStudentByLastName(const char *filename, const char *lastName) {
    FILE *file = fopen(filename, "r");
    if (!file) return;
    
    Student s;
    int found = 0;
    
    while (fscanf(file, "%d,%[^,],%[^,],%f\n", &s.id, s.firstName, s.lastName, &s.gpa) == 4) {
        if (strcmp(s.lastName, lastName) == 0) {
            if (!found) {
                printf("\nStudent Found:\n");
                printf("----------------------------------\n");
            }
            printf("ID: %d\n", s.id);
            printf("First Name: %s\n", s.firstName);
            printf("Last Name: %s\n", s.lastName);
            printf("GPA: %.2f\n\n", s.gpa);
            found = 1;
        }
    }
    
    if (!found) printf("Student not found.\n");
    fclose(file);
}

void sortStudentsByLastName(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) return;
    
    Student students[MAX_RECORDS];
    int count = 0;
    
    while (fscanf(file, "%d,%[^,],%[^,],%f\n", &students[count].id, students[count].firstName, students[count].lastName, &students[count].gpa) == 4) {
        count++;
        if (count >= MAX_RECORDS) break;
    }
    fclose(file);

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].lastName, students[j+1].lastName) > 0) {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    file = fopen(filename, "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d,%s,%s,%.2f\n", students[i].id, students[i].firstName, students[i].lastName, students[i].gpa);
    }
    fclose(file);
    printf("\nStudents Sorted by Last Name:\n");
}