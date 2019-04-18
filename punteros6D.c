#include<stdio.h>
#include<stdlib.h>

void rellenar(int *mat, int filas, int columnas);
void imprimir(int *mat, int filas, int columnas);

int main(){
		
	int f,c;	
	int *mat;


	//Pido el numero de filas y columnas.
	printf("Introduce el numero de filas:\n");
	scanf("%d",&f);
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&c);
	
	printf("\n\n");
	
	
	//Reservo memoria
	mat=(int*)malloc(f*c*sizeof(int));
	
	rellenar(mat,f,c);
	imprimir(mat,f,c);


	free(mat);
	return 0;
}
	
void rellenar(int *mat, int filas, int columnas){
	
	int i,j;
	int k;
	k=0;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		
		mat[i*filas+j]=k;
		k+=2;
		}
	}	

}

void imprimir(int *mat, int filas, int columnas){
	
	int i,j;

	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		
		printf("%d",mat[i*filas+j]);
	
		}
		printf("\n");
	}	

}



