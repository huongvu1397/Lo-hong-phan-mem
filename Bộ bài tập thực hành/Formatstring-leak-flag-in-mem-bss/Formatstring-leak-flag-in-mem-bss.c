#include <stdio.h>
#include <stdlib.h>

char secret[64];

void vun()
{
char buff[32];
printf("THE FLAG IS FAR FAR AWAY FROM STACK WHAT WOULD U DO NOW???\n");
read(0, buff, 16);
printf(buff);
}

int main ()
{
FILE * file;
file = fopen( "flag" , "r");
fscanf(file, "%s", secret);
fclose(file);
vun();
return 0;
}
