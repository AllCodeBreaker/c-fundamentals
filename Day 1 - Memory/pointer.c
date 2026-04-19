#include <stdio.h>

int main(){
	int a = 5;
	int *p = &a;

	printf("a=%d\n&a=%p\np=%p\n&p=%p\n*pd=%d\n", a,&a, p, &p, *p);
	return 0;
}
