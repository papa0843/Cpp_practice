//라이프니츠
//
#include <stdio.h>

int main()
{
	double pi = 0, temp = 1, p = -1, num = 1;
	unsigned int i;
	for( i = 0; i < 10000000; i++)
	{
		p*=-1;
		pi += p*1.0/temp;
		temp += 2;
		num++;
		printf("%d\n", i);
	}

	printf("%.30f\n", 4*pi);
	return 0;
}
