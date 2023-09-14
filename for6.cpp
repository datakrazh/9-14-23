#include <stdio.h>

int main(){


int letreros=0, num=0, opcion;

	printf("Que ciclo quieres usar?:\n");
	printf("1. While\n");
	printf("2. Do-while\n");
	printf("3. For\n");

	scanf("%d", &opcion);
	switch(opcion){
		
		case 1:
			
			while(num<letreros){
			
				printf("Hola mundo while\n");
				num++;
			}
		case 2:
			
			do{
				printf("Hola mundo do while\n");
				num++;
			}
			
			while(num<letreros);
	}
	
	printf("Numero de letreros: ");
	scanf("%d", &letreros);


		
	return 0;
}
