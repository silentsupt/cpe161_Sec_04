#include <stdio.h>
float pyramid(float b,float h);
main ()
{
	float hight, base, sum ;
	printf("Input Hight : ") ;
	scanf("%f",&hight) ;
	printf("Input Base : ") ;
	scanf("%f",&base) ;
	sum = pyramid(base,hight);
	printf("Volumn : %.2f",sum);
}
float pyramid(float b,float h)
{
	float x;
	x = (1.00/3.00)*b*h;
	return x;
}
