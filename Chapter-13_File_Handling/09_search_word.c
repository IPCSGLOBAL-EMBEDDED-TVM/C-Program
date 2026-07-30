
// Author : Adhith D John


#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char word[100];
    char search[100];
    int found=0;

    fp=fopen("sample.txt","r");

    if(fp==NULL)
    {
        printf("File not found.");
        return 1;
    }

    printf("Enter Word to Search: ");
    scanf("%99s",search);

    while(fscanf(fp,"%99s",word)==1)
    {
        if(strcmp(word,search)==0)
        {
            found=1;
            break;
        }
    }

    fclose(fp);

    if(found)
        printf("Word Found");
    else
        printf("Word Not Found");

    return 0;
}