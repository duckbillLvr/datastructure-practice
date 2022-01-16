#include <stdio.h>
#define SIZE 10

void ABC(int *arr, int k);
int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < SIZE - 1; i++)
        ABC(arr, i);

    for (int i = 0; i < SIZE; i++)
        printf(" %d", arr[i]);
}
void ABC(int *arr, int k)
{
    int max, maxIdx;
    for (int i = k; i < SIZE; i++)
    {
        if (max < arr[i] || i == k)
        {
            max = arr[i];
            maxIdx = i;
        }
    }

    int tmp = arr[k];
    arr[k] = arr[maxIdx];
    arr[maxIdx] = tmp;
}