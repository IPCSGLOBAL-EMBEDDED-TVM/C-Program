// Author : Adhith D John

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;
    int size = 0;
    int choice;
    int i;

    do
    {
        printf("\n========== Dynamic Memory Menu ==========\n");
        printf("1. Allocate Memory\n");
        printf("2. Display Elements\n");
        printf("3. Reallocate Memory\n");
        printf("4. Free Memory\n");
        printf("5. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                if(arr != NULL)
                {
                    printf("Memory already allocated.\n");
                    break;
                }

                printf("Enter Size : ");
                scanf("%d", &size);

                arr = (int *)malloc(size * sizeof(int));

                if(arr == NULL)
                {
                    printf("Memory Allocation Failed.\n");
                    return 1;
                }

                printf("Enter Elements:\n");

                for(i = 0; i < size; i++)
                {
                    scanf("%d", &arr[i]);
                }

                break;

            case 2:

                if(arr == NULL)
                {
                    printf("No Memory Allocated.\n");
                }
                else
                {
                    printf("Array Elements:\n");

                    for(i = 0; i < size; i++)
                    {
                        printf("%d ", arr[i]);
                    }

                    printf("\n");
                }

                break;

            case 3:

                if(arr == NULL)
                {
                    printf("Allocate memory first.\n");
                    break;
                }

                printf("Enter New Size : ");
                scanf("%d", &size);

                arr = (int *)realloc(arr, size * sizeof(int));

                if(arr == NULL)
                {
                    printf("Reallocation Failed.\n");
                    return 1;
                }

                printf("Enter New Elements:\n");

                for(i = 0; i < size; i++)
                {
                    scanf("%d", &arr[i]);
                }

                break;

            case 4:

                if(arr != NULL)
                {
                    free(arr);
                    arr = NULL;
                    size = 0;

                    printf("Memory Released Successfully.\n");
                }
                else
                {
                    printf("Memory already free.\n");
                }

                break;

            case 5:

                if(arr != NULL)
                {
                    free(arr);
                }

                printf("Exiting...\n");
                break;

            default:

                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}