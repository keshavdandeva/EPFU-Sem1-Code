#include <stdio.h>

typedef union {
	int i;
	float f;
}number;

int main(void){
	
	number n;

	n.i = 4444;
	printf("Ye wala normal h:\n");
	printf("i: %d  f : %f\n", n.i, n.f );
	// printf("Ye randi kitab me likha h:\n");
	// printf("i: %10d  f : %16.10e\n", n.i, n.f );

	n.f = 4444.0;
	printf("Ye wala normal h:\n");
	printf("i: %d  f : %f\n", n.i, n.f );
	// printf("Ye randi kitab me likha h:\n");
	// printf("i: %10d  f : %16.10e\n", n.i, n.f );

	return 0;
}