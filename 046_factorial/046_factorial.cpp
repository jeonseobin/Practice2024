// 046_factorial.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

// 반복문
long long fact(int n)
{
	long long f = 1;

	for (int i = 1; i <= n; i++)
		f *= i;
	return f;
}

int sum(int n)	// fact와 구조가 똑같다.
{
	int s = 0;

	for (int i = 1; i <= n; i++)
		s += i;
	return s;
}

long long rFact(int n) {
	if (n == 1)
		return 1;
	else
		return rFact(n - 1) * n;
}

int main()
{
	for (int i = 1; i <= 20; i++)
		printf("%lld\n", fact(i));
	printf("\n");

	for (int i = 1; i <= 20; i++)
		printf("%lld\n", rFact(i));
	printf("\n");
}