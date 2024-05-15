#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student_info.h"

void calc_grade(struct Student *students, int numStudents);

void editdata(struct Student *students, int numStudents) {
    int studentNumber;
    printf("Enter the student number you want to edit (1 to %d): ", numStudents);
    scanf("%d", &studentNumber);

    if (studentNumber < 1 || studentNumber > numStudents) {
        printf("Invalid student number.\n");
        return;
    }

    int choice;
    printf("Select what you want to edit for student %d:\n", studentNumber);
    printf("1. Name\n");
    printf("2. SRN\n");
    printf("3. Marks\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    int index = studentNumber - 1;

    switch(choice) {
        case 1: {
            // Edit name
            char newName[50];
            printf("Enter the new name: ");
            scanf("%s", newName);
            strcpy(students[index].name, newName);
            printf("Name updated successfully.\n");
            break;
        }
        case 2: {
            
            char newSRN[100];
            printf("Enter the new SRN: ");
            scanf("%s", newSRN);
            strcpy(students[index].srn, newSRN);
            printf("SRN updated successfully.\n");
            break;
        }
        case 3: {
            
            printf("Enter the new marks for ISA1 in the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 40)\n");
            for (int j = 0; j < 6; j++) {
                scanf("%d", &students[index].isa1[j]);
            }

            printf("Enter the new marks for ISA2 in the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 40)\n");
            for (int j = 0; j < 6; j++) {
                scanf("%d", &students[index].isa2[j]);
            }

            printf("Enter the new marks for ESA in the order of: Physics C Math  Electrical  Mechanical  EVS (ALL OUT OF 100)\n");
            for (int j = 0; j < 6; j++) {
                scanf("%d", &students[index].esa[j]);
            }

            calc_grade(&students[index],numStudents);
            printf("Marks updated successfully.\n");
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    savestudentdata(students, numStudents);
}
