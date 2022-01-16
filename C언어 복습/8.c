#include <stdio.h>
#include <stdlib.h>

typedef struct _student
{
    char name[8];
    int kor, eng, math;
    double avg;
} Student;

int main()
{
    int N;
    scanf("%d", &N);

    Student *st = NULL;
    st = (Student *)malloc(sizeof(Student) * N);
    if (st == NULL)
        return -1;

    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %d %d", st[i].name, &st[i].kor, &st[i].eng, &st[i].math);
        st[i].avg = (st[i].kor + st[i].eng + st[i].math) / 3.0;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%s %.1lf", st[i].name, st[i].avg);
        if (st[i].kor >= 90 || st[i].eng >= 90 || st[i].math >= 90)
            printf(" GREAT");
        if (st[i].kor < 70 || st[i].eng < 70 || st[i].math < 70)
            printf(" BAD");
        printf("\n");
    }

    free(st);
}