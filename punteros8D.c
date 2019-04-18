#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
		
	int f,c;	
	int *mat;
	int i,j;
	
	//Pido el numero de filas y columnas.
	printf("Introduce el numero de filas:\n");
	scanf("%d",&f);
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&c);
	
	printf("\n\n");
	
	
	//Reservo memoria
	mat=(int*)malloc(f*c*sizeof(int));
	
	srand(time(NULL));

	//Rellenar matriz
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){	
		mat[i*f+j]=rand()%100+1;
		}
	}		


	//Imprimir matriz
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d  ",mat[i*f+j]);
		}
		printf("\n");
	}	



	free(mat);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
