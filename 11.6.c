#include<stdio.h>
int i=0;
void disp(int i);
void show();
void main()
{
int i=9;
printf("i in main function = %d\n",i);
disp(3);
show( );
}
void disp(int i)
{
i=5;
printf("i in function disp = %d\n",i);
}
void show()
{
printf("i in function show = %d\n",i);
}

