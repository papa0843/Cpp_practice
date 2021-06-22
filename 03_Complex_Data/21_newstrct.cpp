// newstrct.cpp -- new 연산자를 사용하여 구조체 생성
//
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable * ps = new inflatable;			//구조체를 위한 메모리 대입
	std::cout << "모형 풍선의 이름을 입력하십시오: ";
	std::cin.get(ps->name, 20);				//맴버에 접근하는 방법 1
	std::cout << "부피를 세제곱 피트 단위로 입력하십시오 : ";
	std::cin >> (*ps).volume;				//맴버에 접근하는 방법 2
	std::cout << "가격을 달러 단위로 입력하십시오 : $";
	std::cin >> ps->price;
	std::cout << "이름 : " << (*ps).name << std::endl;
	std::cout << "부피 : " << ps->volume << " cubic feet\n";
	std::cout << "가격 : $" << ps->price << std::endl;
	delete ps;
	return 0;
}
