#include <stdio.h>

int main() {
	int n , k;
	printf("Enter the value of k\n");
	scanf("%d",&k);
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for (int height = k; height > 0; height--) {
		for (int i = height + n - 1; i > 0; i--) {
			printf(" ");
		}
		for (int i = n - height; i > 0 ; i--) {
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}