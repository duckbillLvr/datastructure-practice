#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("%d\n", rand()); // 0~MAX_RAND ������ ���� �߻�

    int N = 100;
    printf("%d\n", rand() % N); // 0~(N-1) ������ ���� �߻�
    int K = 1000;
    printf("%d\n", rand() % N + K);                                  // M~M+(N-1) ������ ���� �߻�
    printf("%ld\n", (((long)rand() << 15) | rand()) % 10000000) + 1; // 1 ~ 1000000 ������ ���� ����
    return 0;
}