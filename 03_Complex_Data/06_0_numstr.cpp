// numstr.cpp -- 수치입력 뒤에 오는 문자열 입력
//
#include <iostream>

int main()
{
	using namespace std;
	cout << "지금 사시는 집에 언제 입주하셨습니까?\n";
	int year;
	cin >> year;
	cout << "사시는 도시를 말씀해주시겠습니까?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "입주 연도: " << year << endl;
	cout << "도시 " << address << endl;
	cout << "등록완료\n";
	return 0;
}
