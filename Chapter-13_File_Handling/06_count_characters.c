
// Author : Adhith D John


#include<stdio.h>

int main()
{
    FILE *fp;
    int count=0;
    char ch;

    fp=fopen("sample.txt","r");

    if(fp==NULL)
    {
        printf("File not found.");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF)
        count++;

    fclose(fp);

    printf("Characters = %d",count);

    return 0;
}