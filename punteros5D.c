#include<stdio.h>
#include<stdlib.h>

int main(){

	int f,c;
	int *mat;
	int i,j;
	int k;
	
	f=10;
	c=10;
	
	mat=(int*)malloc(f*c*sizeof(int));
	
	//Rellenar matriz
	k=0;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
		mat[i*f+j]=k;

		k++;
		}
	}
	
	//Visualizar matriz
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d",mat[i*f+j]);
		}
		printf("\n");
	}
	
	free(mat);
	return 0;	
}
