#include <stdio.h>
#include "random.h"

int main(void)
{  
	int i = 0;
	printf("Numeros aleatorios del 0 al 9:\n\n");
	for (; i != 10; ++i)
		printf("%d\n", random(10));
	printf("\nNumeros aleatorios del 25 al 30:\n\n");
	for (i = 0; i != 10; ++i)
		printf("%d\n", randomEx(25, 30));
	printf("\nNumeros aleatorios del -10 al -1:\n\n");
	for (i = 0; i != 10; ++i)
		printf("%d\n", randomEx(-10, -1));
	getchar();
	return 0;
}   
