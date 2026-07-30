
// Author      : Adhith D John
// Repository  : C Programming Master Repository
// Chapter     : Chapter 13 - File Handling
// Program     : Replace Word in a File
// Description : Replaces a word in a text file and stores the result in
//               another file.


#include <stdio.h>
#include <string.h>

int main()
{
    FILE *source, *destination;
    char word[100];
    char oldWord[100];
    char newWord[100];

    source = fopen("sample.txt", "r");

    if(source == NULL)
    {
        printf("Unable to open sample.txt\n");
        return 1;
    }

    destination = fopen("output.txt", "w");

    printf("Enter word to replace: ");
    scanf("%99s", oldWord);

    printf("Enter new word: ");
    scanf("%99s", newWord);

    while(fscanf(source, "%99s", word) == 1)
    {
        if(strcmp(word, oldWord) == 0)
            fprintf(destination, "%s ", newWord);
        else
            fprintf(destination, "%s ", word);
    }

    fclose(source);
    fclose(destination);

    printf("\nWord replaced successfully.\n");
    printf("Output saved in output.txt\n");

    return 0;
}