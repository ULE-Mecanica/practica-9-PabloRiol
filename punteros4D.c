#include<stdio.h>
#include<stdlib.h>

void media(int *vector,int elementos);

int main(){

	int n;
	int *vec;
	int i,j;

	
	printf("Introduce el numero de elementos del vector: ");
	scanf("%d",&n);

	//Reservo la memoria del vector
	vec=(int*)malloc(n*sizeof(int));
	
	//Relleno el vector
	for(i=0; i<n; i++){
		printf("Introduce el elemento de posicion %d----> ",i);
		scanf("%d",&*(vec+i));
		printf("\n");
	}
	
	media(vec,n);
	free(vec);
	
	return 0;
}

void media(int *vector,int elementos){

int i;
float suma=0;

	for(i=0;i<elementos;i++){
		suma=suma+*(vector+i);
	}
	
	suma=suma/elementos;
	
	printf("La media es %f",suma);


}









