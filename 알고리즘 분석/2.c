#include <stdio.h>
#include <stdlib.h>

int mostOnes(int **table, int n);

int main()
{
    int N;
    scanf("%d", &N);

    int **table = (int **)malloc(sizeof(int *) * N);
    for (int i = 0; i < N; i++)
        table[i] = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &table[i][j]);

    printf("%d", mostOnes(table, N));

    for (int i = 0; i < N; i++)
        free(table[i]);
    free(table);
    return 0;
}

int mostOnes(int **table, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = ans; j < n; j++)
            if (table[i][j] == 1)
                ans = j;
    }

    return ans;
}

/*
8
1 1 1 1 0 0 0 0
1 1 1 1 1 0 0 0
1 0 0 0 0 0 0 0
1 1 1 1 1 1 0 0
1 1 1 1 0 0 0 0
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 0
1 1 1 1 1 0 0 0
*/