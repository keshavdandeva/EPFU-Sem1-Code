	#include <stdio.h>
	#include <time.h>
	#include <stdlib.h>

	int main(int argc, char *argv[])
	{
		srand(time(NULL));
		int x,sum=0;
		x = atoi(argv[1]);
		if(x){

		int a[x][x],b[x][x],c[x][x];
		printf("Matrix A: \n");
		for(int i=0;i<x;i++){
			for(int j=0;j<x;j++){
				a[i][j] = rand() % 9 + 1;
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	printf("\nMatrix B : \n");
		for(int i=0;i<x;i++){
			for(int j=0;j<x;j++){
				b[i][j] = rand() % 9 + 1;
				printf("%d ",b[i][j]);
		}
			printf("\n");
		}


		for (int i = 0; i < x; i++) {                        // first loop till rows of 1st matrix
			for (int j = 0; j < x; j++) {					 // second loop till columns of 2nd matrix
				for (int k = 0; k < x; k++) {				 // third loop till column of 1st (= row of 2nd) matrix
					sum = sum + a[i][k]*b[k][j];             // 
			}

				c[i][j] = sum;                               // multiplication result matrix
				sum = 0;
			}
		}

		printf("\nMatrix C after multiplying A and B is: \n");
		for(int i=0;i<x;i++){
			for(int j=0;j<x;j++){
				
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Error! You entered wrong input");
	}

		return 0;
	}