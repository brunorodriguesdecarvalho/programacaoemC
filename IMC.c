#include <stdio.h>
#include <math.h>

int main (void)
{
	float peso, altura, imc;
	printf("Qual o peso e altura?\n");
	scanf("%f %f", &peso, &altura);
	imc = peso/pow(altura,2);
	printf("IMC = %f.1f\n", imc);
	if(imc<=30) printf("Nao esta obesa!\n");
	else printf("Esta obesa!\n");
	return 0;
}
