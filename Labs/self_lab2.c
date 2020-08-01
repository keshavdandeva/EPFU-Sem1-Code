#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n)
{
	if(n>=1)
	{
		return n * fact(n-1);
	}
	else
	return 1;
}

float cosfunction(int N,float x)
{
	float ans=0;
	int i=0;
	for(i=0;i<=N;++i)
	{
		ans += ((pow(-1,i)) * ((pow(x,2*i))/fact(2*i)));
	}
	return ans;
}

int main( int argc, char  *argv[])
{
	float x = atof(argv[1]);
	int N = atoi(argv[2]);
	float approxcos = cosfunction(N,x);
	float realcos = cos(x);

	printf("The value of x read from command line is : %f \n",x);
	printf("The value of cos of x calculated by built-in function is : %f \n",realcos);
	printf("The value of cos of x calculated by approximation is : %f \n",approxcos);
	printf("The value of error for given N is : %e \n",fabs(realcos-approxcos));

	return 0;
}