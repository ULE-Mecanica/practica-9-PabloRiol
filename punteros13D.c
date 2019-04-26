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
	
	mat=(int*)malloc(filas*columnas*sizeof(int));	
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			if(i==j){
				mat[i*filas+j]=1;
			}
			else{
				mat[i*filas+j]=0;
			}
		}
	}

//Imprimo matriz
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){	
			printf("%d  ",mat[i*filas+j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}























