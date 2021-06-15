//addpntrs.cpp -- 포인터 덧셈
//
#include <iostream>

int main()
{
	double wages[3] = {1000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};

// 배열의 주소를 알아내는 두 가지 방법
//
 	double * pw = wages; 		//배열 이름 = 주소
	short * ps = &stacks[0];	//배열 원소에 주소 연산자 사용
	std::cout << "pw = " << pw << ", *pw = " << *pw << std::endl;
	pw = pw + 1;
	std::cout << "pw 포인터에 1을 더함:\n";
	std::cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";


	std::cout << "ps = " << ps << ", *ps = " << *ps << std::endl;
	ps = ps + 1;
	std::cout << "ps 포인터에 1을 더함:\n";
	std::cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	std::cout << "배열 표기로 두 원소에 접근\n";
	std::cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << std::endl;
	std::cout << "포인터 표기로 두 원소에 접근\n";
	std::cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << std::endl;

	std::cout << sizeof(wages) << " = wages 배열의 크기\n";
	std::cout << sizeof(pw) << " = pw 포인터의 크기\n";
	return 0;
}
	
