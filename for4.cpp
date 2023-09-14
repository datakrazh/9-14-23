#include <stdio.h>

int main(){

	float i, suma=0, cantidad;
	int num;
	
	printf("# de valores a calcular promedio: ");
	scanf("%d", &num);
	
	for (i=1;i<=num;i++)
	{
		printf("Numero: ");
		scanf("%f", &cantidad);
		suma=suma+cantidad;
	}
	suma=suma/num;
	printf ("El promedio es: %f", suma);
		
	return 0;
}
