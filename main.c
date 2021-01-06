/* Programa oara sumar numeros*/


#include <stdio.h>
#include "util.h"

int main(int argc, char **argv){
	
	int n, arreglo[100],indice, suma=0;
	
	printf("Cuantos numeros se requieren sumar:\n");
	scanf("%d",&n);
	leeArreglo(n,arreglo);
	for(indice =0; indice <n; indice++){
		suma+=arreglo[indice];
	}
	printf("La suma de los numeros es: %d\n",suma);
	return 0;
}
