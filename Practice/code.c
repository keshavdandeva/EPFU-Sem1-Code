#include <stdio.h>
#include <conio.h>

int main() {
	int n = 5, q = 16, p = 2;
	q = (n++ > p) || (p++ != 3); 
	printf ("n=%d p=%d q=%d\n", n, p, q);
	printf("YAHAN YE HO GAYA\n");
		// 0pehle | 1pehle| nahi hota
	for (n = -2; n < ++q; n++, q--, p = q % 2) {
		//  nai| 3hota   | 2hota
		if(n==p)
			continue;		printf ("n=%d p=%d q=%d\n",n, p, q);
	}	
}
