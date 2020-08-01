#include <stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int x,b,a=0,y=1;
x=atoi(argv[1]);

if(x && argc==2){
int A[x][x];

for(int i=0;i<x;i++){
	for(int j=0;j<x;j++){
		A[i][j] = 0;
	}
}

for(int i=x-1;i>=0;i--){
	b=x-1;
	for(int j=0;j<=a;j++){
          A[i][b]=y;
          y++;
          b--;
	}
a++;
}
for(int i=0;i<x;i++){
	for(int j=0;j<x;j++){
		printf("%d\t",A[i][j]);
	}
	printf("\n");
}
}
else{
	printf("Error");
}
return 0;
}