// Strings.cpp -- 배열에 문자열을 저장한다.
//
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << name2 << endl;
	cin >> name1;
	cout << name1 << " " << strlen(name1) << "자 " << sizeof(name1) << "byte" << endl;
	name2[3] = '\0';
	cout << name2 << endl;
	return 0;
}
