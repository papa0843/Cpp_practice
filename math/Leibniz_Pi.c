//라이프니츠
//
#include <stdio.h>
#include <time.h>

int main()
{
	FILE *log;
	log = fopen("./Leibnz.log", "w");

	double pi = 0, temp = 1, p = -1, num = 1;
	unsigned int i;
	for( i = 0; i < 10000000; i++)
	{
		clock_t start = clock();
		p*=-1;
		pi += p*1.0/temp;
		temp += 2;
		num++;
		printf("%d\n", i);
		clock_t end = clock();
		double time = (end - start); // CLOCKS_PER_SEC;
		printf("%0.3lf ms\n", time);
		if(i%8 == 0)
			fprintf(log, "%d, %0.3lf ms, pi = %.30f\n", i, time, 4*pi);
	}

	printf("%.30f\n", 4*pi);
	fclose(log);
	return 0;
}
