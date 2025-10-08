/*
 * week4_3_struct_database.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define struct Student with fields name, id, grade
struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    int n;
    struct Student *students = NULL;
    float total_grade = 0.0f;
    float average_grade;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

 
    students = (struct Student*)malloc(n * sizeof(struct Student));
    
 
    if (students == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

 
    for (int i = 0; i < n; i++) {
        printf("Enter data for student %d: ", i + 1);
        
       
        if (scanf("%49s", students[i].name) != 1) {
            printf("Error reading name for student %d\n", i + 1);
            free(students);
            return 1;
        }
        
       
        if (scanf("%d", &students[i].id) != 1) {
            printf("Error reading ID for student %d\n", i + 1);
            free(students);
            return 1;
        }
        
        if (scanf("%f", &students[i].grade) != 1) {
            printf("Error reading grade for student %d\n", i + 1);
            free(students);
            return 1;
        }
        
   
        total_grade += students[i].grade;
    }

 
    printf("\nID    Name    Grade\n");
    printf("-------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-6d %-8s %-6.1f\n", 
               students[i].id, 
               students[i].name, 
               students[i].grade);
    }

  
    average_grade = total_grade / n;
    printf("-------------------\n");
    printf("Average grade: %.2f\n", average_grade);

  
    free(students);
    students = NULL;

    return 0;
}
