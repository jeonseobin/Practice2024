// 004_variable.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	char ch = 'A';
	char str[20] = "Hello World!";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;

	printf("Character is %c\n", ch);
	printf("String is %s\n", str);
	printf("Float value is %f\n", flt);
	printf("Integer value is %d\n", no);
	printf("Double value is %f\n", dbl);
	printf("Octal value is %o\n", no);
	printf("Hecadecimal value is %x\n", no);
}