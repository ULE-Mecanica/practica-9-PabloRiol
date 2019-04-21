#include<stdio.h>
#include<stdlib.h>

int main(){
	int *mat;
	int filas,columnas;
	int i,j;
	
	printf("Introduce el numero de filas:\n");
	scanf("%d",&filas);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&columnas);
	
	//Reservo memoria
	mat=(int*)malloc(filas*columnas*sizeof(int));
	
	//Rellenar matriz
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			if(i==j){
				mat[i*filas+j]=i*j;
			}
			else{
				mat[i*filas+j]=i-j;
			}	
		}
	}
	//Imprimir matriz
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			
			printf("%d   ",mat[i*filas+j]);
			
		}
		printf("\n\n");
	}
			
			
	return 0;
}
