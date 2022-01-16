#include <stdio.h>

typedef struct _time
{
    int hour, min, sec;
} Time;

int main()
{
    Time t1, t2;
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    Time re;
    if (t2.sec < t1.sec)
    {
        re.sec = t2.sec + 60 - t1.sec;
        t2.min -= 1;
    }
    else
        re.sec = t2.sec - t1.sec;

    if (t2.min < t1.min)
    {
        re.min = t2.min + 60 - t1.min;
        t2.hour -= 1;
    }
    else
        re.min = t2.min - t1.min;

    if (t2.hour < t1.hour)
    {
        re.hour = t2.hour + 24 - t1.hour;
    }
    else
        re.hour = t2.hour - t1.hour;

    printf("%d %d %d", re.hour, re.min, re.sec);
}