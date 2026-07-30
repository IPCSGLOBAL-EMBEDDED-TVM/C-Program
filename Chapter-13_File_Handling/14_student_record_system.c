// Author      : Adhith D John
// Repository  : C Programming Master Repository
// Chapter     : Chapter 13 - File Handling
// Program     : Student Record System


#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int choice;

    do
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                fp = fopen("students.dat", "ab");

                if(fp == NULL)
                {
                    printf("File Error.\n");
                    return 1;
                }

                printf("Enter Roll Number : ");
                scanf("%d", &s.roll);

                printf("Enter Name : ");
                scanf(" %[^\n]", s.name);

                printf("Enter Marks : ");
                scanf("%f", &s.marks);

                fwrite(&s, sizeof(struct Student), 1, fp);

                fclose(fp);

                printf("Student Added Successfully.\n");

                break;

            case 2:

                fp = fopen("students.dat", "rb");

                if(fp == NULL)
                {
                    printf("No Records Found.\n");
                    break;
                }

                printf("\n-----------------------------------------\n");
                printf("Roll\tName\t\tMarks\n");
                printf("-----------------------------------------\n");

                while(fread(&s, sizeof(struct Student), 1, fp))
                {
                    printf("%d\t%-15s%.2f\n",
                           s.roll,
                           s.name,
                           s.marks);
                }

                fclose(fp);

                break;

            case 3:

                printf("Thank You.\n");
                break;

            default:

                printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}