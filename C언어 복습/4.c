#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);

    int size = strlen(str);
    while (size--)
    {
        printf("%s\n", str);
        char tmp = str[0];
        for (int i = 0; i < strlen(str) - 1; i++)
            str[i] = str[i + 1];
        str[strlen(str) - 1] = tmp;
    }
}