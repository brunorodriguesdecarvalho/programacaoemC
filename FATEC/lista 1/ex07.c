#include <stdio.h>

int main(void){
	float media, x, y;
	printf("Realizar calculo de media das provas. Siga as instrucoes \n");
	printf("Digite a primeira nota:");
	scanf("%f", &x);
	printf("Digite a segunda nota:");
	scanf("%f", &y);
	printf("A media eh: %.1f \n", (x+y)/2);
	return 0;
}
