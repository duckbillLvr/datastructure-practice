// Prefix average 누적 평균
// rand와 timer의 사용
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int *prefixAverages1(int *X, int n);
int *prefixAverages2(int *X, int n);
int compare(int *, int *, int n);
int main()
{
    int N;
    scanf("%d", &N);

    int *X = (int *)malloc(sizeof(int) * N);
    srand(time(NULL));
    for (int i = 0; i < N; i++)
        X[i] = rand() % 10000 + 1;
    LARGE_INTEGER ticksPerSec1, ticksPerSec2, start1, start2, end1, end2, diff1, diff2;
    QueryPerformanceCounter(&ticksPerSec1);
    QueryPerformanceCounter(&start1);
    int *prefix1 = prefixAverages1(X, N);
    QueryPerformanceCounter(&end1);

    QueryPerformanceCounter(&ticksPerSec2);
    QueryPerformanceCounter(&start2);
    int *prefix2 = prefixAverages2(X, N);
    QueryPerformanceCounter(&end2);

    diff1.QuadPart = end1.QuadPart - start1.QuadPart;
    diff2.QuadPart = end2.QuadPart - start2.QuadPart;

    printf("일치불일치: %d\n", compare(prefix1, prefix2, N));
    printf("%.9f\n", ((double)diff1.QuadPart / (double)ticksPerSec1.QuadPart));
    printf("%.9f\n", ((double)diff2.QuadPart / (double)ticksPerSec2.QuadPart));
    free(prefix1);
    free(prefix2);
    free(X);
    return 0;
}
int compare(int *pre1, int *pre2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (pre1[i] != pre2[i])
            return 0;
    }
    return 1;
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