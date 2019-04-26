#include<stdio.h>
#include<stdlib.h>

int devuelvemat(int n);
void imprime(int *mat,int n);

int main(){
	int *mat;
	int n;

	
	printf("Introduce el orden de la matriz:\n");
	scanf("%d",&n);
	
	
	mat=devuelvemat(n);

	imprime(mat,n);


	free(mat);
	
	return 0;
}

int devuelvemat(int n){
	int i,j;
	int *mat;

	mat=(int*)malloc(n*n*sizeof(int));	
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				mat[i*n+j]=1;
			}
			else{
				mat[i*n+j]=0;
			}
		}
	}

	return mat;	
}




void imprime(int *mat,int n){
	int i,j;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){	
			printf("%d  ",mat[i*n+j]);
		}
		printf("\n");
	}
	

}






