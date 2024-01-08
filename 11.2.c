#include <stdio.h>
int myFactorial(int);
void main()
{
 int myNumber = 5;
 printf("%d face is %d", myNumber, myFactorial(myNumber));
}
int myFactorial(int n)
{
 int result = 1, i;
 for (i = 1; i <= n; i++)
 {
 result *= i;
 }
 return result;
}
