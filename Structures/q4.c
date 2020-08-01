#include <stdio.h>

struct Nvec{
	int n;
	int dim[];
};

// struct Nvec v1 = {3,{0,0,0}};
// struct Nvec v2 = {3,{1,2,3}};

int add(struct Nvec v1, struct Nvec v2){
	struct Nvec v3;
	if (v1.n == v2.n)
	{
		v3.n = v1.n;
		for (int i = 0; i < v1.n; ++i)
		{
			v3.dim[i] = v1.dim[i] + v2.dim[i];
		}
		printf("The resultant vector is: ");
		for (int i = 0; i < v3.n; ++i)
		{
			printf("%d,",v3.dim[i] );
		}
	}
	else{
		printf("Vectors cannot be added\n");
	}
	
	return 0;
}

int main()
{
	struct Nvec v1,v2; 
	
	v1.n = 3;
	v1.dim[0] = 1;
	v1.dim[1] = 1;
	v1.dim[2] = 1;
	printf("Dimension of vector 1: %d\n",v1.n );
	for (int i = 0; i < v1.n; ++i)
		{
			printf("%d,",v1.dim[i] );
		}
	
	v2.n = 3;
	v2.dim[0] = 1;
	v2.dim[1] = 2;
	v2.dim[2] = 3;
	printf("\nDimension of vector 2: %d\n",v2.n );
	for (int i = 0; i < v2.n; ++i)
		{
			printf("%d,",v2.dim[i] );
		}
	printf("\n");
	add(v1, v2);

	return 0;
}