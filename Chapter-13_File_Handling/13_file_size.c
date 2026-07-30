// Author : Adhith D John


#include<stdio.h>

int main()
{
    FILE *fp;
    long size;

    fp=fopen("sample.txt","r");

    if(fp==NULL)
    {
        printf("File not found.");
        return 1;
    }

    fseek(fp,0,SEEK_END);

    size=ftell(fp);

    fclose(fp);

    printf("File Size = %ld bytes",size);

    return 0;
}