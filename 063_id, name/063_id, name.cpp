// 063_id, name.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int sId;
    string name;

    cout << "학번을 입력 : ";
    cin >> sId;
    cout << "이름을 입력 : ";
    cin >> name;

    cout << "당신의 학번은 " << sId << ", 이름은 " << name << "입니다" << endl;
}
