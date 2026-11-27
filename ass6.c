#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n, i, choice;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Invalid number");
        return 0;
    }

    printf("\n1. Without Recursion");
    printf("\n2. With Recursion");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            for (i = 1; i <= n; i++)
                fact = fact * i;

            printf("Factorial without recursion = %llu", fact);
            break;

        case 2:
            printf("Factorial with recursion = %llu", factorial(n));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
