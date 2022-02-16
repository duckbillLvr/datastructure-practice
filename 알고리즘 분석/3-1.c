// Prefix average ´©Àû Æò±Õ
#include <stdio.h>
#include <stdlib.h>

int *prefixAverages1(int *X, int n);
int *prefixAverages2(int *X, int n);
int main()
{
    int N;
    scanf("%d", &N);

    int *X = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &X[i]);

    int *prefix1 = prefixAverages1(X, N);
    int *prefix2 = prefixAverages2(X, N);

    for (int i = 0; i < N; i++)
        printf("%d ", prefix1[i]);
    printf("\n");
    for (int i = 0; i < N; i++)
        printf("%d ", prefix2[i]);

    free(prefix1);
    free(prefix2);
    free(X);
    return 0;
}
int *prefixAverages1(int *X, int n)
{
    int *ans = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
            sum += X[j];
        ans[i] = sum / (i + 1);
    }

    return ans;
}
int *prefixAverages2(int *X, int n)
{
    int *ans = (int *)malloc(sizeof(int) * n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += X[i];
        ans[i] = sum / (i + 1);
    }
    return ans;
}