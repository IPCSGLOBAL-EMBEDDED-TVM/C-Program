
// Author : Adhith D John
//************************

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt","w");

    if(fp==NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    fprintf(fp,"Welcome to C Programming\n");
    fprintf(fp,"File Handling Example\n");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}