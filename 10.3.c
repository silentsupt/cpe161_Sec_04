#include <stdio.h>
main()
{
	int val[3][4] = {500,420,366,207,
					 611,485,382,301,
					 877,745,592,473};
	int i,j;
	int totals[3] = {0};
	printf("Table number of student in faculty \n");
	for (i = 0; i < 3; i++) {  
	for (j = 0; j < 4; j++) {	 
	 printf("%d\t",val[i][j]);
	 totals[i] += val[i][j]; 
 	}
	printf("\n");
 	}
 	printf("\nTotal of Engineer: %d\n",totals[0]);
 	printf("Total of Business: %d\n",totals[1]);
 	printf("Total of Art: %d\n",totals[2]);
}
