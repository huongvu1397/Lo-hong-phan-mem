#include <stdio.h>
#include <stdlib.h>

char buff[1024];

void vun()
{
printf("MY FLAG OVERTHERE! CAN YOU GET IT?\n");
gets(&buff);
printf(buff);
}

int main ()
{
FILE * file;
char secret[64];
file = fopen( "flag" , "r");
fscanf(file, "%s", secret);
fclose(file);
vun();
return 0;
}
