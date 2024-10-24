// 044_calc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

double plus(double a, double b)
{
	return a + b;
}
double minus(double a, double b)
{
	return a - b;
}
double multipy(double a, double b)
{
	return a * b;
}
double divide(double a, double b)
{
	return a / b;
}
int main()
{
	double num1, num2;

	printf("두 숫자를 입력하세요 : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("[출력]\n");
	printf("더하기 = %lf\n", plus(num1, num2));
	printf("빼기 = %lf\n", minus(num1, num2));
	printf("곱하기 = %lf\n", multipy(num1, num2));
	printf("나누기 = %lf\n", divide(num1, num2));




}