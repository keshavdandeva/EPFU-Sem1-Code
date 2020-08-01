#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int strlen(char **s[]){
  
//   char *pt = s;
//   int i = 0;
  
  
//   while (*pt != '\0') {
//     i++;
//     pt++;
//   }
//   printf("Length of String : %d", i);

//   return 0;
// }

int main(int argc, char *argv[]){

char str[100];

if(argc == 2){
  strcpy(str,argv[1]);
}
else{
printf("Invalid arguments");
return 0;
}

//strlen(*str);

printf("The string is : %s",str);

return 0;
}





