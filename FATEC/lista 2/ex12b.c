#include <stdio.h>
int main(void){
	int dia, mes, ano;
	printf("Digite Dia/Mes/Ano...\n");
	printf("Dia: ");
	scanf("%d", &dia);
	printf("Mes: ");
	scanf("%d", &mes);
	printf("Ano: ");
	scanf("%d", &ano);
	printf("%d/%d/%d\n", dia, mes, ano);
	return 0;
}
