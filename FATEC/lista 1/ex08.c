#include <stdio.h>

int main(void){
	int x, y;
	printf("Digite o KM: \n");
	scanf("%d", &x);
	printf("Digite a quantidade (litros) de combustivel: \n");
	scanf("%d", &y);
	printf("Consumo: %d Km/Litro.", x/y);
	return 0;
}
