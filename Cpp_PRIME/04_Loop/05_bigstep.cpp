// bigstep.cpp -- count as directed

#include <iostream>

int main()
{
	std::cout << "정수를 하나 입력하십시오 : ";
	int by;
	std::cin >> by;
	std::cout << "갱신 크기 " << by << "\n";
	for (int i = 0; i < 100; i = i + by)
		std::cout << i << std::endl;
	return 0;
}
