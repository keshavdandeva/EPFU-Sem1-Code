#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int array[10] = {3,1,66,2,49,22,65,90,0,1};
	int temp;

	for (int i = 0; i < 10; ++i)
	{
		for (int j = i+1; j < 10; ++j)
		{
				
			if (array[i]>array[j]) {
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;		
			}
		}
	}

	printf("The sorted array is: \n");
	for (int i = 0; i < 10; ++i)
	{
		printf(" %d ",array[i] );
	}

	return 0;
}