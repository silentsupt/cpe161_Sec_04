#include <stdio.h>
int get_fx(int);
main ()
{	
	int x;
	printf("Enter X: ");
	scanf("%d",&x);
	printf("f(%d)=%d",x,get_fx(x));
}
int get_fx(int x){
	if (x >= 0){
	    return (x*x)+2*x+1; }
	else {
		return 0;
	}
}
