#include <stdio.h>
void swap(int a, int b)
{
int tmp;
tmp = a;
a = b;
b = tmp;
printf("In swap : A = %d, B = %d\n", a, b);
}
void main()
{
int a = 5, b = 10;
printf("Before swap A = %d, B = %d\n", a, b);
swap(a, b);
printf("After swap A = %d, B = %d\n", a, b);
}

