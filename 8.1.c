#include <stdio.h>
void main()
{ int i=1;
float num , sum = 0.0;
printf("Summary 5 positive number\n");
while (i <= 5) {
printf("Input positive number %d : " , i);
scanf("%f" , &num);
if (num <= 0) {
printf("\aError , Input positive number %d again\n" , i);
continue;
}
sum += num;
i++;
}
printf("\nSummary 5 positive number = %.2f" , sum);
}
