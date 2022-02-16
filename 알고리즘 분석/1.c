#include <stdio.h>

int modulo(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", modulo(a, b));
}

int modulo(int a, int b)
{
    return a % b;
}