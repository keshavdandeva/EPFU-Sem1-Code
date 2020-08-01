#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=0;
	while(i<argc)
	{
		printf("Parameter %d : %s \n",i++, argv[i]);
	}
	return 0;
}
