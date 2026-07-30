
// Author : Adhith D John


#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int words=0,inWord=0;

    fp=fopen("sample.txt","r");

    if(fp==NULL)
    {
        printf("File not found.");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        if(isspace((unsigned char)ch))
            inWord=0;
        else if(!inWord)
        {
            inWord=1;
            words++;
        }
    }

    fclose(fp);

    printf("Words = %d",words);

    return 0;
}