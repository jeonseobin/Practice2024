// 026_numberTriangle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    //int n;

    //printf("n 입력  : ");
    //scanf_s("%d", &n);

    //for (int i = n; i > 0; i--) {
    //    for (int j = i; j > 0; j--)
    //        printf("%d ", j);
    //    printf("\n");
    //}

    int n[10];
    int max, min;

    printf("10개의 숫자 입력 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &n[i]);
        if (i == 0) {
            max = min = n[i];
        }
        else {
            if (n[i] > max) {
                max = n[i];
            }
            if (n[i] < min) {
                min = n[i];
            }
             
        }
    }
}


