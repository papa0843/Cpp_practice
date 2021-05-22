// instr3.cpp -- get () & get () 으로 여러 단어를 읽는다.
//
#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하십시오:\n";
	cin.get (name, ArSize).get();
	cout << "좋아하는 디저트를 입력하십시오:\n";
	cin.get (dessert, ArSize).get();
	cout << name << "님 " << dessert << "나왔습니다.\n";
	return 0;
}
