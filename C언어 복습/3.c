#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);

int main()
{
    int N, A, B;
    int *arr = (int *)malloc(sizeof(int) * N);
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &A, &B);
    swap(&arr[A], &arr[B]);

    for (int i = 0; i < N; i++)
        printf(" %d", arr[i]);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}