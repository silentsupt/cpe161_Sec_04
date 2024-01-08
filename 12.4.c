#include<stdio.h>
void change(int* px, int* py) {
px = py;
*px = 5;
}
int main() {
int x = 0;
int y = 1;
int* px = &x;
int* py = &y;
change(px, py);
*px = 2;
printf("(x, y) = (%d, %d)\n", x, y);
}
