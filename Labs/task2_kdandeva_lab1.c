#include <stdio.h>


int main()
{
    int i, n, j = 0, k = 1, l;

    printf("Enter the number of elements in Fibonacci Series:\n ");
    scanf("%d", &n);

    printf("Fibonacci Series is: \n");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", j);
        l = j + k;
        j = k;
        k = l;
    }
return 0;
}
