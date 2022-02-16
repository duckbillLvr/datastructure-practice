#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("%d\n", rand()); // 0~MAX_RAND 사이의 난수 발생

    int N = 100;
    printf("%d\n", rand() % N); // 0~(N-1) 사이의 난수 발생
    int K = 1000;
    printf("%d\n", rand() % N + K);                                  // M~M+(N-1) 사이의 난수 발생
    printf("%ld\n", (((long)rand() << 15) | rand()) % 10000000) + 1; // 1 ~ 1000000 범위의 난수 생성
    return 0;
}