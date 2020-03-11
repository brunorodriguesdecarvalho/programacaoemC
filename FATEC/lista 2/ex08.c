#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c;
	a =1;
	while(a!=0){
		printf("Digite o valor de A:");
		scanf("%f", &a);
		if(a==0){
			printf("fim do programa\n");
		} else {
			printf("Digite o valor de B:");
			scanf("%f", &b);
			printf("Digite o valor de C:");
			scanf("%f", &c);

			printf("Os valores de: A[%.1f], B[%.1f] e C[%.1f].\n", a, b, c);
			float delta, baskhara1, baskhara2;
			delta = pow(b,2)-4*a*c;
			printf("Delta: [%.1f]\n", delta);

			if(delta<0){
				printf("Nao existem valores reais para um delta menor que zero.\n");
			} else if (delta==0){
				baskhara1 = (-b + sqrt(delta))/(2*a);
				printf("Existe uma unica raiz para essa equacao de segundo grau: x[%.1f].\n", baskhara1);
			} else {
				baskhara1 = ((-b) + sqrt(delta))/(2*a);
				baskhara2 = ((-b) - sqrt(delta))/(2*a);
				printf("As raizes dessa equacao de segundo grau sao x1[%.1f] e x2[%.1f].\n", baskhara1, baskhara2);
			};
		};
	};
	return 0;
}
