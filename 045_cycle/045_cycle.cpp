// 045_cycle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>


void cycle(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int a = 10, b = 20, c = 30;
    cycle(&a, &b, &c);
    printf("결과: %d %d %d\n", a, b, c);
}
.
