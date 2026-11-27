
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[200], result[400];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    do
    {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length of first string = %lu\n",
                       (unsigned long)strlen(str1));
                break;

            case 2:
                strcpy(result, str2);
                printf("Copied string = %s\n", result);
                break;

            case 3:
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string = %s\n", result);
                break;

            case 4:
                if(strcmp(str1, str2) == 0)
                {
                    printf("Both strings are equal.\n");
                }
                else
                {
                    printf("Both strings are not equal.\n");
                }
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}
