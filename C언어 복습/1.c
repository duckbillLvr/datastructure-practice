#include <stdio.h>

int sum(int n);

int main()
{
    int X;
    scanf("%d", &X);

    int total = 0;
    for (int i = 1; i <= X; i++)
    {
        total += sum(i);
    }

    printf("%d", total);
}

int sum(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
        total += i;
    return total;
}