#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int i,j,k,t;	
	int f,c;	
	int *mat;
	int suma=0;

	//Pido el numero de filas y columnas.
	printf("Introduce el numero de filas:\n");
	scanf("%d",&f);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&c);
	//Reservo memoria
	mat=(int*)malloc(f*c*sizeof(int));
	
	//Rellenar matriz
	printf("Introduce los elementos de la matriz.\n\n");
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
		
			printf("Introduce la posicion %d %d de la matriz-----> ",i,j);			
			scanf("%d",&mat[i*f+j]);
		}
	}
	//Muestra los elementos de la matriz
	//k=filas t=columnas

	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d",mat[i*f+j]);
		}
		printf("\n");
	}

	// Sumar los elementos
	for(k=0;k<f;k++){
		for(t=0;t<c;t++){
			suma+= mat[k*f+t];
		}
	}

	printf("La suma de los elementos de la matriz es %d  ",suma);
	free(mat);
	return 0;
}
	
	


	
