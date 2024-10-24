// 046_recursive.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

void rec(int n) {
    if (n > 5)
        return;
    printf("n = %d\n", n);
    rec(n + 1);
}
int main()
{
    rec(1);
}

