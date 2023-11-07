#include <stdio.h>
main()
{
	int val[3][5] = {4,14,6,11,-5,
					-12,7,5,3,-9,
					10,-32,1,0,15};
	int i,j;
	printf("Point \n");
	for (i = 0; i < 3; i++) {
	for (j = 0; j < 5; j++) {
	 printf("%d\t",val[i][j]);
 	}
	printf("\n");
 	}
}
