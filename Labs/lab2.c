#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int fact(int n) {
	if(n >= 1)
	{
		return n * fact(n - 1);
	}
	else 
	{
		return 1;
	} 
}

float cosFunction(int N, float x) 
{
	int i = 0;
	float ans = 0;
	for (i = 0; i < N; ++i) 
	{
		ans += pow(-1, i) * (pow(x, (2 * i)) / fact((2 * i)));
	}
	
	return ans;
}

int main(int argc, char const *argv[]) 
{
	
	float x = atof(argv[1]);
	int N = atoi(argv[2]); 
	
	float cosApproximate = cosFunction(N, x);
	float cosReal = cos(x);

	printf("Function approx: %f\n", cosApproximate);
	printf("Real value: %f\n", cosReal);
	printf("Error: %e\n", fabs(cosReal - cosApproximate));
	
	return 0;
}
