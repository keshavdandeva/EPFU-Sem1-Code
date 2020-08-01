#include <stdio.h>

int main(){
	int sum = 0, i = 0;
	printf("Enter the values\n");

	while(sum < 100) {
		scanf("%d", &i);
		if(i % 2 == 0){
			printf("Kuch odd dede harami: ");
			scanf("%d", &i);
		} sum += i;
		if(sum > 100) { sum -= i; break; }
		scanf("%d", &i);
		if(i % 2 != 0){
			printf("Kuch even dede harami: ");
			scanf("%d", &i);
		} sum += i;
		if(sum > 100) { sum -= i; break; }
	}
	printf("The sum is: %d ", sum);
	return 0;
}