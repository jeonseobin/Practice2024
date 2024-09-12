// 019_Odd , even sum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n, oddSum = 0, evenSum = 0;
    printf("n을 입력하세요 :");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }
    printf("홀수의 합: %d\n", oddSum);
    printf("짝수의 합: %d\n", evenSum);
    return 0;
}


