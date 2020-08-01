#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

	int n,m;
	scanf("%d,%d",&n,&m);
    int *arr1 = (int*) malloc(n*sizeof(int));
    int *arr2 = (int*) malloc(m*sizeof(int));

    for (int i = 0; i < n; ++i)
    {
    	printf("Enter Arr1[%d]: \n",i);
    	scanf("%d",&arr1[i]);
    }

    for (int i = 0; i < m; ++i)
    {
    	printf("Enter Arr2[%d]: \n",i);
    	scanf("%d",&arr2[i]);
    }

	int arr3[n+m];

	for (int i = 0; i < n; ++i)
	{
		arr3[i] = arr1[i];
	}

	for (int i = 0; i < m; ++i)
	{
		arr3[i+5] = arr2[i];
	}
	
	printf("The concatenated array is: \n");
	for (int i = 0; i < (n+m); ++i)
	{
		printf(" %d ",arr3[i] );
	}
	return 0;
}

