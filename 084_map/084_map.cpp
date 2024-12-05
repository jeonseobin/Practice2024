// 084_map.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, string> f;

	f["강병익"] = "000-1111-2222";
	f["조용석"] = "000-3333-4444";
	f["김병수"] = "000-5555-6666";

	for (auto i : f)
		cout << i.first << " : " << i.second << endl;

}

