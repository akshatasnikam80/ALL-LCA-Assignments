
#include <stdio.h>

int main()
{
    int num1, num2, choice;
    int result;

    printf("====================================\n");
    printf("       ARITHMETIC CALCULATOR        \n");
    printf("====================================\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    switch (choice)
    {
        case 1:
            result = num1 + num2;
            printf("\nAddition = %d\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nSubtraction = %d\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nMultiplication = %d\n", result);
            break;

        case 4:
            if (num2 != 0)
            {
                printf("\nDivision = %.2f\n",
                       (float)num1 / num2);
            }
            else
            {
                printf("\nDivision by zero is not possible.\n");
            }
            break;

        case 5:
            if (num2 != 0)
            {
                result = num1 % num2;
                printf("\nModulus = %d\n", result);
            }
            else
            {
                printf("\nModulus by zero is not possible.\n");
            }
            break;

        default:
            printf("\nInvalid choice! Please select 1 to 5.\n");
    }

    printf("\nThank you for using the calculator!\n");

    return 0;
}
