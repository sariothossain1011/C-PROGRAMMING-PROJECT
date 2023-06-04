#include <stdio.h>
#define CYCLE 5
#include <unistd.h>

// for windows
#ifdef _WIN32
#include <conio.h>
#define sleep(x) Sleep(x * 1000)
#else
#define clrscr() printf("\e[1;H\e[2j")
#include <nuistd.h>
#endif
int main()
{

    int hour, minute, second;
    printf("Enter your Hour Minute Second:");

    scanf("%d%d%d", &hour, &minute, &second);
    clrscr();

    int h = 0, m = 0, s = 0;
    while (1)
    {
        printf("%.2d: %.2d: %.2d\n", h, m, s);
        if (h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            clrscr();
        }
        s++;
        sleep(1);
        if (s == CYCLE)
        {
            m++;
            s = 0;
        }
        if (m == CYCLE)
        {
            h++;
            m = 0;
        }
    }

    return 0;
}