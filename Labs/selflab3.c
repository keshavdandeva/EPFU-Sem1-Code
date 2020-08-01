#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void uniq(char []);
void bubbleSort(char []);
void vowelizer(char []);

int main(int agrc, char *argv[]) {
	char first = argv[1][0];
	char second = argv[2][0];
	char arr[15];
	printf("Array: ");
	srand(time(NULL));
	for(int i=0; i<15; ++i) {
		arr[i] = (rand() % (second - first + 1) + first);
		printf("%c ", arr[i]);  
	}
	printf("\n");
	uniq(arr);
	bubbleSort(arr);
	vowelizer(arr);

	return 0;
}

void uniq(char ar[]) {
	int alphabet[26] = {0};
	for (int i = 0; i < 15; ++i) 
		alphabet[(int)ar[i] - 97] += 1;

	printf("\nCharacter count: ");
	for (int i = 0; i < 26; ++i) 	
		if(alphabet[i] != 0) 
			printf("%c - %d, ", 97 + i, alphabet[i]);
	printf("\n");
}

void bubbleSort(char arr[]) {
	char temp;
	char arr_dup[15];
	for (int i = 0; i < 15; ++i) 
		arr_dup[i] = arr[i];

	for (int i = 0; i < 15-1; i++)        
		for (int j = 0; j < 15-i-1; j++) 
			if (arr_dup[j] > arr_dup[j+1]) {
				temp = arr_dup[j];
				arr_dup[j] = arr_dup[j+1];
				arr_dup[j+1] = temp;
			}
	printf("\nSorted character: \n");
	for (int i = 0; i < 15; ++i) {
		if ( i != 14) printf("%c,", arr_dup[i]);
		else printf("%c", arr_dup[i]);
	}
}

void vowelizer(char ar[]) {
	for (int i = 0; i < 15; ++i) 
		if(ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i] == 'u')
			ar[i] = '#';

	printf("\n\nString with replaced character: \n");
	for (int i = 0; i < 15; ++i) 
		printf("%c", ar[i]);
}