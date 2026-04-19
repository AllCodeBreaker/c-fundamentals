#include<stdio.h>

int main(){
	int x,y,z;
	x = 5, y =10;
	z = x+y;
	printf("x=%d, Address=%p\n", x, &x);
	printf("y=%d, Address=%p\n", y, &y);
	printf("z=%d, Address=%p\n", z, &z);

	printf("Pointer Difference of x and y is %ld\n", &y-&x);
	return 0;
}
