//Este ejercicio tambien funcionaria con la funcion imprimir.
#include<stdio.h>
#include<stdlib.h>

void inicializamatriz(int *mat,int f,int c);
//void imprimir(int *mat,int f,int c);

int main(){
	
	int *mat;
	int filas,columnas;
	int i,j;
	printf("Introduce el numero de filas:\n");
	scanf("%d",&filas);
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&columnas);
	
	mat=(int*)malloc(filas*columnas*sizeof(int));
	
	inicializamatriz(mat,filas,columnas);
//  imprimir(mat,filas,columnas);
	
	
		for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d    ",mat[i*filas+j]);
		}
		printf("\n\n");
	}
	
	
	return 0;
}
void inicializamatriz(int *mat,int f,int c){
	int i,j;
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			if(i==j){
				mat[i*f+j]=1;
			}
			else{
				mat[i*f+j]=0;
			}
		}
	}
}
/*void imprimir(int *mat,int f,int c){
	int i,j;
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d    ",mat[i*f+j]);
		}
		printf("\n\n");
	}
}

*/
