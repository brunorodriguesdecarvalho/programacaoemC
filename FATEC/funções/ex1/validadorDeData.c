#include <stdio.h>

int valida(int d, int m, int a) {
	if(a<1900) return 0;
	if(m<1 || m>12) return 0;
	if(d<1 || d>ultimo_dia(m,a)) return 0;
	return 1;
}

int ultimo_dia(int m, int a) {
	if(m==2) return 28+bissexto(a);
	if(m==4 || m==6 || m==9 || m==11) return 30;
	return 31;
}

int bissexto(int a) {
	return ((a%4==0 && a%100!=0) || a%400==0);
}

void exibe_ds(int d, int m, int a) {
	d++;
	if(d>ultimo_dia(m,a)) {
		d = 1;
		m++;
		if(m==13) {
			m = 1;
			a++;
		}
	}
	printf("DS: %02d/%02d/%d", d, m, a);
}

int main(void){
	int d, m, a;
	printf("Data? ");
	scanf("%d/%d/%d", &d, &m, &a);
	if( valida(d,m,a) ) 
		exibe_ds(d,m,a);
	else 
		puts("Invalida!");
	return 0;
};
