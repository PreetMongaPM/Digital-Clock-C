#include <stdio.h>
#include<windows.h>
int main()
{
    int d = 1000;
    int h, m, s;
    printf("Enter the start time in hours, minutes and seconds form\n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 24 || m > 59 || s > 59)
    {
        printf("Enter a valid time\n");
    }
    else
    {
            while (1){
                s++;
                if (s >= 59)
                {
                    s = 0;
                    m++;
                }
                if (m >= 59)
                {
                    m = 0;
                    h++;
                }
                if (h >= 24)
                {
                    h = 0;
                }
                printf(" Clock : %02d:%02d:%02d\n ", h, m, s);
                Sleep(d);
                system("cls");
        }
    }
    return 0;
}