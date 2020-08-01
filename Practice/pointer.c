#include <stdio.h>


int main(int argc, char const *argv[])
{

 int a=5;
 int *p;

 p = &a;

 printf("%d\n",p );
 printf("%d\n",*p );
 printf("%p\n",p );
 printf("%p\n",*p );

 return 0;
}
