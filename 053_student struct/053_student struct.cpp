﻿// 053_student struct.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

struct student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};


void printStudent(student s) {
	printf("학과 : ");
	printf("%s\n", s.dept);
	printf("학년 : ");
	printf("%d\n", s.year);
	printf("학번 : ");
	printf("%d\n", s.id);
	printf("이름 : ");
	printf("%s\n", s.name);
	printf("전화번호 : ");
	printf("%s\n", s.phone);
}
int main()
{
	student s;	// 53번 문제

	

	printf("학과 : ");
	scanf_s("%s", s.dept , 20);
	printf("학년 : ");
	scanf_s("%d", &s.year);
	printf("학번 : ");
	scanf_s("%d", &s.id);
	printf("이름 : ");
	scanf_s("%s", s.name, 20);
	printf("전화번호 : ");
	scanf_s("%s", s.phone, 20);	// 53번 문제


	printf("학과 : ");
	printf("%s\n", s.dept);
	printf("학년 : ");
	printf("%d\n", s.year);
	printf("학번 : ");
	printf("%d\n", s.id);
	printf("이름 : ");
	printf("%s\n", s.name);
	printf("전화번호 : ");
	printf("%s\n", s.phone);	// 53번 문제

}

