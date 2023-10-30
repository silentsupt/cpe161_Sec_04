#include <stdio.h>
void main()
{
int num[5], total;
int i;
for(i = 0; i < 5; i++)
{
printf("Enter number : ");
scanf("%d", &num[i]);
}
for(i = 0; i < 5; i++)
total += num[i];
printf("\nAverage = %.2f", total/5.0);
}

