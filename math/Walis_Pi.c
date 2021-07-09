//월리스 공식

#include <stdio.h>

int main()
{
	double pi = 1, even=2.0,odd=1.0;
	int i;

	for ( i = 1; i < 1000000; i++)
	{
		pi*=even/odd;
		if(i%2==1)
			odd += 2;
		else
			even += 2;
	}

	printf("%.10f\n",2.0*pi);
	return 0;
}
