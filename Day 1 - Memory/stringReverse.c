#include <stdio.h>

void reverse (char* str){
	char* start = str;
	char* end = str;

	while(*end != '\0'){
		end++;
	}
	end--;

	while(start < end){
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

int main(){
	char string[] = "Hello, World!";
	printf("Original string: %s | Address: %p\n", string, &string);

	reverse(string);
	printf("Reversed string: %s | Address: %p\n", string, &string);

	return 0;
}
