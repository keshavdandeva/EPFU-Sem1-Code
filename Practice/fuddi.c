#include <stdio.h>

int main() {
	int sum = 0, x, i = 1, y;

	while(sum < 100) {
		printf("Enter: ");
		scanf("%d", &x);
		y += x;
		if( y < 100 ) {
			if(x % 2 == 0 && i % 2 == 0) {
				sum += x;
				i++;
			} else if(x % 2 != 0 && i % 2 != 0) {
				sum += x;
				i++;
			} else {
				printf("Wrong \n");
			}
		}
		else {
			printf("Sum > 100\n");
		}
	}

	return 0;
}