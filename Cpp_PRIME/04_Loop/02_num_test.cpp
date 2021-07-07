// num_test.cpp -- user numeric test in for loop

#include <iostream>
int main()
{
	std::cout << "Enter the starting countdwon value : ";
	int limit;
	std::cin >> limit;
	int i;
	for (i = limit; i; i--)	//quits when i is 0
		std::cout << "i = " << i << "\n";
	std::cout << "Done now that i = " << i << "\n";
	return 0;
}
