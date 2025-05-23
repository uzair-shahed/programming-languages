// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool full_time;
} Student;

// PROTOTYPES
void print_student(Student student);

int main()
{
    Student students[] = {
        {"Bill Baxter", 30, 3.60, true},
        {"John Bill", 20, 2.60, false},
        {"Hamza Afzal", 22, 3.30, false},
    };

    int size = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < size; i++)
    {
        print_student(students[i]);
    }

    // Student student4 = {0};

    // strcpy(student4.name, "Sandy");
    // student4.age = 27;
    // student4.gpa = 3.89;
    // student4.full_time = true;

    return 0;
}

void print_student(Student student)
{
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full Time: %s\n\n", student.full_time ? "Yes" : "No");
}