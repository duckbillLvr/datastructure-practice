// 시간 측정 함수
/*
? 알고리즘의 실행시간을 측정하는 데는 점근적 분석 방법과 실제 시간 측정, 두 가지가 있다.
? 점근적 분석에 의한 시간 측정은 big-Oh 값을 구하는 이론적 방식을 말하며, 실제 시간
측정은 알고리즘 실행에 소요되는 cputime을 측정하는 것을 말한다.
? 점근적 방식에 의한 측정은 <자료구조 및 실습> 교재 1장에서 배운대로 이론적 방식에
의해 측정할 수 있으며, 실제 시간 측정은 라이브러리 함수를 이용하여 어떤 알고리즘
실행에 소요되는 실제 cputime을 측정한다. 아래는 라이브러리 함수를 이용한 실제 시간
측정에 관한 도움말이다.
*/

#include <stdio.h>
#include <Windows.h>

int main()
{
    LARGE_INTEGER ticksPerSec;
    LARGE_INTEGER start, end, diff;

    QueryPerformanceCounter(&ticksPerSec);
    QueryPerformanceCounter(&start);
    // 시간을 측정하고 싶은 작업 삽입
    //---------------------------------------------
    QueryPerformanceCounter(&end);

    diff.QuadPart = end.QuadPart - start.QuadPart;
    printf("time: %.12f sec\n", ((double)diff.QuadPart / (double)ticksPerSec.QuadPart));
    return 0;
}