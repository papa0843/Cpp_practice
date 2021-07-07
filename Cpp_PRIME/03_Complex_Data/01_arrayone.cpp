//arrayone.cpp -- 정수형의 작은 배열

#include <iostream>

int main()
{
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {200, 300, 50};
	//배열을 생성하고 초기화
	//사용하는 컴파일러에 따라 이 배열을 초기화할 수 없다면,
	//int yamcosts[3] 대신 static int yamcosts[3]을 사용할 것
	
	cout << "고구마 합계 = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << yams[1] << "개 들어있는 포장은 ";
	cout << "개당 " << yamcosts[1] << "원씩입니다.\n";

	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
	
	cout << "세 포장의 총 가격은 " << total << "원입니다.\n";
	cout << "\nyarms 배열의 크기는 " << sizeof yams << "바이트입니다.\n";
	return 0;
}
