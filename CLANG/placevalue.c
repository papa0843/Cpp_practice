#include <stdio.h>

int main()
{
	double num = 1234.567890;

	printf("%f\n", num);
	printf(".0f : %.0f\n", num);
	printf(".1f : %.1f\n", num);
	printf(".2f : %.2f\n", num);
	printf(".3f : %.3f\n", num);
	printf(".4f : %.4f\n", num);
	printf(".5f : %.5f\n", num);
	printf(".6f : %.6f\n", num);
	printf(".7f : %.7f\n", num);
	return 0;
}
