// 016_F to C.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
   
    float f = 100.0;
    float c;
    printf("화씨\t섭씨\n");
    printf("==================\n");

    while (f >= 0) {
        c = (5.0 / 9.0) * (f - 32);
        printf("%.1f\t\t%.1f\n", f, c);
        f -= 10;
    }

    return 0;
}

