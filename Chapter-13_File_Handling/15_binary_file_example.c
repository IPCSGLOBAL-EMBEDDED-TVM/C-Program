// Author : Adhith D John


#include<stdio.h>

struct Student
{
    int roll;
    char name[30];
};

int main()
{
    FILE *fp;

    struct Student s={101,"Adhith"};

    fp=fopen("student.dat","wb");

    if(fp==NULL)
    {
        printf("File Error");
        return 1;
    }

    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);

    printf("Binary File Written Successfully.");

    return 0;
}