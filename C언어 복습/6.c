#include <stdio.h>
#define SIZE 5
typedef struct _student
{
    char name[10];
    int score;
} Student;

int main()
{
    Student st[SIZE];
    int avg = 0;
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%s %d", st[i].name, &st[i].score);
        avg += st[i].score;
        getchar();
    }
    avg /= SIZE;
    for (int i = 0; i < SIZE; i++)
    {
        if (st[i].score <= avg)
            printf("%s\n", st[i].name);
    }
}