//ptrstr.cpp -- 문자열을 지시하는 포인터의 사용
//
#include <iostream>
#include <cstring>		// strlen(), strcpy() 를 선언

int main()
{
	char animal[20] = "bear";	//animal에 bear가 들어있다.
	const char * bird = "wren";	//bird에 문자열의 주소가 들어있다.
	char * ps;			//초기화 되지 않았다.

	std::cout << animal << " and ";
	std::cout << bird << "\n";
	//std::cout << ps << "\n";	//쓰레기값을 출력하거나 먹통이 될 수도 있다.
	
	std::cout << "동물의 종류를 입력하십시오: ";
	std::cin >> animal;
	//std::cin >> ps; 절대로 해서는 안 될 엄청난 실수이다.
	//ps가 대입할 공간을 지시하고 있지 않다.
	//
	ps = animal;			//ps가 문자열을 지시하도록 설정한다
	std::cout << "strcpy() 사용 전:\n";
	std::cout << (int *) animal << " : " << animal << std::endl;
	std::cout << (int *) ps << " : " << ps << std::endl;

	ps = new char[strlen(animal) + 1]; 	//새 메모리를 대입한다.
	strcpy(ps, animal);			//새 메모리에 문자열을 복사
	
	std::cout << "strcpy() 사용 후:\n";
	std::cout << (int *) animal << " : " << animal << std::endl;
	std::cout << (int *) ps << " : " << ps << std::endl;

	delete [] ps;
	return 0;
}
