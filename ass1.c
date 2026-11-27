
#include <stdio.h>
#include <string.h>

int main()
{
    char email[50];
    char password[50];

    char correct_email[] = "student@gmail.com";
    char correct_password[] = "123456";

    printf("================================\n");
    printf("       GMAIL LOGIN SYSTEM       \n");
    printf("================================\n");

    printf("Enter your Gmail ID: ");
    scanf("%49s", email);

    printf("Enter your Password: ");
    scanf("%49s", password);

    if (strcmp(email, correct_email) == 0 &&
        strcmp(password, correct_password) == 0)
    {
        printf("\nLogin Successful!\n");
        printf("Welcome to Gmail.\n");
    }
    else
    {
        printf("\nLogin Failed!\n");
        printf("Invalid Gmail ID or Password.\n");
    }

    printf("\n================================\n");

    return 0;
}
