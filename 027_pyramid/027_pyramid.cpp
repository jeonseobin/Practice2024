// 027_pyramid.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;
    printf("자연수 n 입력 : ");
    scanf_s("%d", &n);

    printf("\n(1)\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n(2)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(3)\n");
    for (int i = 5; i > 0; i--) {
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n(4)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n - i; j++)
            printf(" ");

        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");

        
    }

    printf("\n(5)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < n - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(6)\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}

