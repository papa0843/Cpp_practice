#include <stdio.h>
 
void calculate(int, int, int *, int *, int *, int *);
 
int main(void) {
 
    int x = 7, y = 5;
    int add, sub, mul, div;
 
    calculate(x, y, &add, &sub, &mul, &div);
 
    printf("%d + %d = %d\n", x, y, add);
    printf("%d - %d = %d\n", x, y, sub);
    printf("%d * %d = %d\n", x, y, mul);
    printf("%d / %d = %d\n", x, y, div);
 
 
    return 0;
}
 
void calculate(int x, int y, int *add, int *sub, int *mul, int *div) {
 
    *add = x + y;
    *sub = x - y;
    *mul = x * y;
    *div = x / y;
 
 
}
