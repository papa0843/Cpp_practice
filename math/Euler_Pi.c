// 오일러 곱셈 공식
//
#include <stdio.h>
#include <math.h>

int main()
{
	double pi = 0.0;
	int i;
	for( i = 1; i < 1000000 ; i++)
	{
		pi+=1.0/pow(i,2.0);//pow == 제곱 연산
	}

	printf("%.10f",sqrt(6*pi));
	return 0;
}
