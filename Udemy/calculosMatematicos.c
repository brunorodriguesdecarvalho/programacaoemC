#include <stdio.h>
#include <stdlib.h>

void main() {
	float a = 5, b = 3;
	int c = a, d = b;
	printf("A soma de %.0f + %.0f = %.1f \n", a, b, a + b);
	printf("A subtracao de %.0f - %.0f = %.1f \n", a, b, a - b);
	printf("A divisao de %.0f / %.0f = %.1f \n", a, b, a / b);
	printf("A multiplicao de %.0f * %.0f = %.1f \n", a, b, a * b);
	printf("O resto de %d e %d = %d \n", c, d, c % d);
	printf("O valor absoluto de -3 = %d \n", abs(-3));
	system("pause");
}
