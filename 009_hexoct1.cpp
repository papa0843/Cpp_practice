//hexoct1.cpp -- 16진 정수형 상수와 8진 정수형 상수를 보여 준다.
#include <iostream>

int main() 
{
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << chest << "\n";
	cout << waist << "\n";
	cout << inseam << "\n";
	return 0;
}
