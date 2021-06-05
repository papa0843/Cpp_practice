//adress.cpp -- & 연산자로 주소를 알아낸다.
//
#include <iostream>

int main()
{
	using namespace std;

	int donuts = 6;
	double cups = 4.5;

	cout << "donuts의 값 = " << donuts << ", donuts의 주소 = " << &donuts << endl;

//참고 : unsinged (&donuts)와 unsinged (&cups)를 요구하는 경우도 있다.
//
	cout << "cups의 값 = " << cups << ", cups의 주소 = " << &cups << endl;
	return 0;
}
