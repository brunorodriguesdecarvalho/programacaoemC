#include <stdio.h>
#define maiuscula(c) ( (c)>='a' && (c)<='Z' )
int main (void) {
	char x;
	printf("Caractere?");
	scanf("%s", &x);
	printf("Maiuscula:");
	printf("%s\n", maiuscula(x) ? "Sim" : "nao");
	return 0;
}	
