#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,k,t;	
	int f,c;	
	int **mat;
	int suma=0;
	//Pido el numero de filas y columnas.
	printf("Introduce el numero de filas:\n");
	scanf("%d",&f);
	
	printf("Introduce el numero de columnas:\n");
	scanf("%d",&c);
	
	//Reservo memoria para la matriz dinamica.
	mat=(int **)malloc(f*sizeof(int*));
		
		if(mat[i]==NULL){
			printf("No se ha podido reservar espacio de memoria.\n");
			exit(1);
		}
	
	for(i=0;i<f;i++){
		mat[i]=(int*)malloc(c*sizeof(int));
		
			if(mat[i]==NULL){
			printf("No se ha podido reservar espacio de memoria.\n");
			exit(1);				
			}	
	}
		
		//Rellenar matriz
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Introduce la posicion %d %d de la matriz    ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	//Muestra matriz   k=filas, t=columnas
	
		for(k=0;k<f;k++){
			for(t=0;t<c;t++){
				
				printf("%d ",mat[k][t]);
				suma=suma+mat[k][t];
			}
			printf("\n\n");
		}
	
	printf("La suma vale %d",suma);
	free(mat);
return 0;	
}












