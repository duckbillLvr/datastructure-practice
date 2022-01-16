#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);

    int *arr1 = NULL;
    if ((arr1 = (int *)malloc(sizeof(int) * N)) == NULL)
        return -1;
    int *arr2 = (int *)malloc(sizeof(int) * N);
    if ((arr2 = (int *)malloc(sizeof(int) * N)) == NULL)
        return -1;

    for (int i = 0; i < N; i++)
        scanf("%d", &arr1[i]);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < N; i++)
        arr1[i] += arr2[N - i - 1];

    for (int i = 0; i < N; i++)
        printf(" %d", arr1[i]);

    free(arr1);
    free(arr2);
}