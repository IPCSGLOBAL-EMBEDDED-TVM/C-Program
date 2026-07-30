
// Author : Adhith D John


#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int lines=0;

    fp=fopen("sample.txt","r");

    if(fp==NULL)
    {
        printf("File not found.");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
            lines++;
    }

    fclose(fp);

    printf("Lines = %d",lines+1);

    return 0;
}