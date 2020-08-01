#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int x,int y);

int  main(int argc, char *argv[])
{
	srand(time(NULL));
	int x;
	x = atoi(argv[1]);

	int a[x][x],b[x][x];

	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			a[i][j] = rand() % 9 + 1;
			b[i][j] = rand() % 9 + 1;
		}
	}
	print_array(x,x);


	return 0;
}

void print_array(){
	int a[x][y];
	for (int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}

}