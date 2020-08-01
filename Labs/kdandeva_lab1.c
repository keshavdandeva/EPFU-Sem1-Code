#include <stdio.h>
int main()
{

printf("Keshav Dandeva\n");

int a,b;
float c,d;
char e,f;

printf("Enter two numbers(integers)\n");
scanf(" %d %d", &a, &b);
printf("Enter two numbers(floats)\n");
scanf(" %f %f", &c, &d);
printf("Enter two characters(chars)\n");
scanf(" %c %c", &e, &f);

printf("Int as int: %d\n", a);
printf("Float as int: %d\n", c);
printf("Float as float: %f\n", c);
printf("Char as char: %c\n", e);
printf("Char as int: %d\n", e);

printf("Add two integers: %d\n", a + b);

printf("Divide two integers: %d\n", b / a);

printf("Divide two floats: %f\n", c / d );

printf("Add an integer to a character as char: %c as int: %d \n",(a+e),(a+e));

return 0;
}
