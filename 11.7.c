#include <stdio.h>
int a = 20;
int sum(int b);
void main ()
{
 int a = 10;
 int b = 20;
 int c = 0;
 printf ("value of a in main() = %d\n", a);
 c = sum(b);
 printf ("value of c in main() = %d\n", c);
}
int sum(int b)
{
 printf ("value of a in sum() = %d\n", a);
 printf ("value of b in sum() = %d\n", b);
 return a + b;
}
