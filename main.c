/* Programa oara sumar numeros*/


#include <stdio.h>
int main(void){
	
	int n, arreglo[100],indice;
	
	printf("Cuantos numeros se requieren sumar:\n");
	scanf("%d",&n);
	for(indice =0; indice <n; indice++){
		printf("Ingrese el número %d:",indice+1);
		scanf("%d",&(arreglo[indice]));
		printf("%d\n",arreglo[indice]);
	}
	printf("Resultado:%d \n",n);
}
