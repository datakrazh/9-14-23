#include <stdio.h>

int main(){

	int x, sum=0;
	for (x=1;x<=100;x++)
	{
		if (x%2==0){
			printf("%d\n", x);
			sum+=x;//se suma a sí mismo mas "x" (sum=sum+x)
		}
	}
	printf("Suma de numeros pares: %d\n", sum);
	
	return 0;
}
