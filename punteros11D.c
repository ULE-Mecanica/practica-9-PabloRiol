#include<stdio.h>
#include<stdlib.h>

int main(){
	int filas,columnas;
	int *mat;
	int descendente,i,j;
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&filas);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&columnas);
	
	mat=(int*)malloc(filas*columnas*sizeof(int));
	
	descendente=filas*columnas;
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			mat[i*filas+j]=descendente;
			descendente--;
		}
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d    ",mat[i*filas+j]);
		}
		printf("\n\n");
	}
	

	return 0;
}
