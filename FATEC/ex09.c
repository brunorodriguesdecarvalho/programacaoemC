#include <stdio.h>

int main(void){
	float F, C;
	printf("Digite uma temperatura Fahrenheit (apenas valores):");
	scanf("%f", &F);
	C = (F-32)*5/9;
	printf("Valor de F: %.1f \n", F);
	printf("Valor de C: %.1f \n", C);
	return 0;
}
