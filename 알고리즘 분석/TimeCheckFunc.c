// �ð� ���� �Լ�
/*
? �˰����� ����ð��� �����ϴ� ���� ������ �м� ����� ���� �ð� ����, �� ������ �ִ�.
? ������ �м��� ���� �ð� ������ big-Oh ���� ���ϴ� �̷��� ����� ���ϸ�, ���� �ð�
������ �˰��� ���࿡ �ҿ�Ǵ� cputime�� �����ϴ� ���� ���Ѵ�.
? ������ ��Ŀ� ���� ������ <�ڷᱸ�� �� �ǽ�> ���� 1�忡�� ����� �̷��� ��Ŀ�
���� ������ �� ������, ���� �ð� ������ ���̺귯�� �Լ��� �̿��Ͽ� � �˰���
���࿡ �ҿ�Ǵ� ���� cputime�� �����Ѵ�. �Ʒ��� ���̺귯�� �Լ��� �̿��� ���� �ð�
������ ���� �����̴�.
*/

#include <stdio.h>
#include <Windows.h>

int main()
{
    LARGE_INTEGER ticksPerSec;
    LARGE_INTEGER start, end, diff;

    QueryPerformanceCounter(&ticksPerSec);
    QueryPerformanceCounter(&start);
    // �ð��� �����ϰ� ���� �۾� ����
    //---------------------------------------------
    QueryPerformanceCounter(&end);

    diff.QuadPart = end.QuadPart - start.QuadPart;
    printf("time: %.12f sec\n", ((double)diff.QuadPart / (double)ticksPerSec.QuadPart));
    return 0;
}