/* Programa oara sumar numeros*/


#include <stdio.h>
#include "util.h"

int main(int argc, char **argv){
	
	int n, arreglo[100],indice;
	
	printf("Cuantos numeros se requieren sumar:\n");
	scanf("%d",&n);
	leeArreglo(n,arreglo);
	return 0;
}
