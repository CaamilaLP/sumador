/* Programa oara sumar numeros*/


#include <stdio.h>

void leeArreglo(int n, int arreglo[])
{
	
	int indice;
	
	for(indice =0; indice <n; indice++){
		printf("Ingrese el número %d:",indice+1);
		scanf("%d",&(arreglo[indice]));
		//printf("%d\n",arreglo[indice]);
		
	}
}
