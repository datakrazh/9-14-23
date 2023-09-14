#include <stdio.h>

int main(){

	int x=0, y=1, z, cont;
	int lim;
	printf("Hasta que numero quieres la escala?: ");
	scanf("%d", &lim);
	printf("0\n1\n");
	for (cont=1;cont<=lim;cont++)
	{
		z=x+y;
		printf("%d\n", z);
		x=y;
		y=z;
	}	
	return 0;
}
