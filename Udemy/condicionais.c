#include <stdio.h>
#include <stdlib.h>

void main(){
	int a = 4;
	float b = 2.5;
	char c = 'd';

	if(b == 2.5) {
		printf("A variavel b = 2.5 \n");
	}

	if (a % 2 == 1) {
		printf("A variavel eh impar \n");
	} else {
		printf("A variavel eh par \n");
	}

	if (c == 'c') {
		printf("A variavel C é igual a C \n");
	} else {
		printf("A variavel C é diferente de c \n");
	}

	system("pause");
}
