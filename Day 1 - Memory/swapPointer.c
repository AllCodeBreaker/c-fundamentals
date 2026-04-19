#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a ;
	*a = *b;
	*b = temp;
}
int main(){
	int x,y;
	x = 5, y= 6;
	printf("Before Swap\nX= %d\nY=%d\n", x, y);
	swap(&x,&y);
	printf("After Swap\nX= %d\nY=%d\n", x, y);
	return 0;
}