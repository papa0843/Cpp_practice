// use_new.cpp -- new 연산자 사용하기
//
#include <iostream>

int main()
{
	using namespace std;
	int nights = 1001;
	int * pt = new int;	//int 형을 저장할 메모리를 대입
	*pt = 1001;		// 대입된 메모리에 값을 저장

	cout << "nights의 값 = " << nights << ": 메모리 위치 " << &nights << endl;

	cout << "int 형 값 = " << *pt << ": 메모리 위치 " << pt << endl;

	double * pd = new double; 	//double 형을 저장할 메모리를 대입
	*pd = 10000001.0;		// 그 메모리에 double 형 값을 대입

	cout << "doubel 형 값 = " << *pd << ": 메모리 위치 = " << pd << endl;
	cout << "포인터 pd의 메모리 위치 : " << &pd << endl;
	cout << "pt의 크기 = " << sizeof(pt) << " : *pt의 크기 = " << sizeof(*pt) << endl;
	cout << "pd의 크기 = " << sizeof pd << " : *pd의 크기 = " << sizeof(*pd) << endl;
	return 0;
}
