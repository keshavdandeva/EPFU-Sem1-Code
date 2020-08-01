#include <stdio.h>

int main(){
	unsigned long int i,f=0,s=1,next;

	for(i=0;i<100;i++){
		if(i<2)
			printf("%lu, ",i);
		else{
			next = f + s;
			if(next >=1000)
				break;
			printf("%lu, ",next);
			f = s;
			s = next;
		}
	}
	
	
	return 0;
}