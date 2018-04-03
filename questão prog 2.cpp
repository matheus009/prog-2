#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{ char palavra[150];
  int i, tot=0;
  
printf("Insira alguma frase:");
gets(palavra);
for(i=0;i<strlen(palavra);i++)
if(isdigit(palavra[i]))
tot++;
printf("\n%d digitos em %s\n",tot,palavra);
system("Pause");
return 0;
}
