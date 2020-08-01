#include <stdio.h>
#include <stdlib.h>

void copy(char *arr1, char arr2[], int sizeof_arr2){

	for (int i = 0; i < sizeof_arr2; ++i){

		arr1[i] = arr2[i];
	}
}

int main(int argc, char const *argv[]){

	char arr2[] = {"Ek thi fuddi"};
	size_t n2 = sizeof(arr2)/sizeof(arr2[0]);
	char *arr1;

	arr1 = (char*) calloc(n2, sizeof(char));

	copy(arr1, arr2, n2);

	printf("%s", arr1 );

	return 0;
}