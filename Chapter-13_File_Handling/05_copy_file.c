
// Author : Adhith D John


#include<stdio.h>

int main()
{
    FILE *source,*destination;
    char ch;

    source=fopen("sample.txt","r");
    destination=fopen("copy.txt","w");

    if(source==NULL || destination==NULL)
    {
        printf("File Error.");
        return 1;
    }

    while((ch=fgetc(source))!=EOF)
    {
        fputc(ch,destination);
    }

    fclose(source);
    fclose(destination);

    printf("File Copied Successfully.");

    return 0;
}