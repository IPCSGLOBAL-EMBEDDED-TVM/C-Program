//============================================================================
// Author : Adhith D John
//============================================================================

#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("sample.txt","a");

    if(fp==NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    fprintf(fp,"\nAppended Successfully.");

    fclose(fp);

    printf("Data Appended.");

    return 0;
}