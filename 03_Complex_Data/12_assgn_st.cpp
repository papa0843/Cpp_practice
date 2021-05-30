// asign_st.cpp -- 구조체 대입
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
	using namespace std;
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;

	cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;

	choice = bouquet; //한 구조체를 다른 구조체에 대입
	cout << "choice : " << choice.name << " for $" << choice.price << endl;

	return 0;
}
