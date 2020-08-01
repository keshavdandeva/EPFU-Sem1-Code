#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){

	int x[5] = {3,2,4,1,0};

	for (int i = 0; i < 5; ++i){

		*(x+i) = *(x+x[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ",x[i] );
	}

	return 0;
}