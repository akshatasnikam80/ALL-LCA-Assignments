#include <stdio.h>
#include <time.h>

int main()
{
    int year, month, day, i;
    int days[] = {31,28,31,30,31,30,
                  31,31,30,31,30,31};

    char *months[] = {"January","February","March",
                      "April","May","June","July",
                      "August","September","October",
                      "November","December"};

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        days[1] = 29;

    for(month = 0; month < 12; month++)
    {
        struct tm t = {0};
        t.tm_year = year - 1900;
        t.tm_mon = month;
        t.tm_mday = 1;

        mktime(&t);

        printf("\n\n%s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for(i = 0; i < t.tm_wday; i++)
            printf("    ");

        for(day = 1; day <= days[month]; day++)
        {
            printf("%3d ", day);

            if((day + t.tm_wday) % 7 == 0)
                printf("\n");
        }
        printf("\n");
    }

    return 0;
}
