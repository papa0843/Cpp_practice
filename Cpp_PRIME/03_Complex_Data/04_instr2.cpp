//instr2.cpp -- getline() 함수로 한 행을 읽는다.
//
#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "이름을 입력하십시오:\n";
	cin.getline(name, ArSize);
	cout << "좋아하는 디저트를 입력하십시오:\n";
	cin.getline(dessert, ArSize);
	cout << name << "님 " << dessert << "나왔습니다.\n";
	return 0;
}
