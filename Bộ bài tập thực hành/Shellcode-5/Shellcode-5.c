#include<stdio.h>
#include<string.h>
#include<stdlib.h>

unsigned char code[50];

void BAD_BYTE()
{
printf("BAD BYE =))\n");
exit(0);
}

void NEVER_CALL()
{
system("echo how do you get here? you won find sh");
}

main()
{
printf("11 BYTE SHELLCODE ... IT'S IMPOSSIBLE HAHAHA\n");
printf("MAX-SIZE of shellcode is 11\nInput hex-encode shellcode\nEx: aabbccddeeff\n");
printf("BAD BYTE: 0B 89 E3 62 69 6e cd 80\n");
char input[100] = {0};
read(0, input, 22);

for(int count = 0; count < strlen(input)-1; count += 2) {
sscanf(&input[count], "%2hhx", &code[count/2]);
char c = code[count/2];
if (c == 0)
{
printf("REALLY? SHELLCODE HAVE NULL BYTE?\n");
printf("%d\n", count);
exit(0);
}
}

int (*ret)() = (int(*)())code;
ret();
}
