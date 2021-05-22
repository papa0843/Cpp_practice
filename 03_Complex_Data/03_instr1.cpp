// instr1.cpp -- 여러개의 문자열을 읽는다.
//
#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하십시오:\n";
	cin >> name;
	cout << "좋아하는 디저트를 입력하십시오:\n";
	cin >> dessert;
	cout << name << "님 " << dessert << "나왔습니다.\n";
	return 0;
}
