#include <stdio.h>

int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30};
    int i, totalDays, j, weekDay = 0, spaceCounter = 0, year;

    printf("Enter your favorite year :\n");
    scanf("%d", &year);
    printf("\n\n----------Welcome to %d------------\n\n", year);

    // check if it is a leap year
    if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
    {
        daysInMonth[1] = 29;
    }

    for (i = 0; i < 12; i++)
    {
        printf("\n------------------------%s----------------------\n", months[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for (spaceCounter = 1; spaceCounter <= weekDay; spaceCounter++)
        {
            printf("      ");
        }
        totalDays = daysInMonth[i];
        for (j = 1; j <= totalDays; j++)
        {
            printf("%6d", j);
            weekDay++;
            if (weekDay > 6)
            {
                weekDay = 0;
                printf("\n\n");
            }
        }
    }

    return 0;
}