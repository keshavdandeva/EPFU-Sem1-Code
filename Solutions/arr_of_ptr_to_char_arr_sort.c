#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char *p[], int size){

char *temp;

	for (int i = 0; i < size; ++i){

		for (int j = i+1; j < size; ++j){

			if(strcmp(p[i],p[j])>0){

				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}

int main(int argc, char const *argv[]){

	
	char *lineptr [3] = {"raju","raj","raji"};
	sort(lineptr,3);

	for (int i = 0; i < 3; ++i)	{

		printf("%s\n",lineptr[i] );
	}

	return 0;
}