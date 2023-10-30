#include <stdio.h>
main()
{
	int sum=0,num,i=1;
	while (i<=5){
	printf("Input number %d: ",i);
	scanf("%d",&num);
	if (num==0){
	printf("\aError , Run program and Try to Input number again\n");
	return 0;
	}
	sum+=num;
	i++;
	}
	printf("Summary 5 number is: %d",sum);
}
