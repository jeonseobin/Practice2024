// 006_temperature.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main() {
    float fahrenheit[] = { 100.0, 80.0, 60.0 };
    float celsius[3];

    for (int i = 0; i < 3; i++) {
        celsius[i] = (5.0 / 9.0) * (fahrenheit[i] - 32);
    }

    printf("화씨\t섭씨\n");
    printf("======================\n");
    for (int i = 0; i < 3; i++) {
        printf("%.1f\t%.1f\n", fahrenheit[i], celsius[i]);
    }

    return 0;
}
