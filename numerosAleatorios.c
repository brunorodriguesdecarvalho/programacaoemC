#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

	srand((unsigned)time(NULL));
	
	int aleatorio = (rand() % 100)+5;

	printf("%d\n", aleatorio);
		
	return 0;
}
