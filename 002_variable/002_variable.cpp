﻿// 002_variable.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    printf("이름    국어    영어    수학    합계    평균\n");
    printf("============================================\n");
    printf("홍길동  100      90      80      %d      %4.1f\n", 100 + 90 + 80, (100 + 90+ 80)/3.0);
    printf("임꺽정  90       100     100     %d      %4.1f\n", 90 + 100 + 100, (90 + 100 + 100)/3.0);
    printf("성춘향  80       90      100     %d      %4.1f\n", 80 + 90 + 100, (80 + 90 + 100) / 3.0);
    printf("============================================\n");
    
}

