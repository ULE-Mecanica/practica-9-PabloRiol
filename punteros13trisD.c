#include<stdio.h>
#include<stdlib.h>

void rellenamat(int *mat, int n);
void imprime(int *mat,int n);

int main(){
	int *mat;
	int n;	
	n=6;
	
	mat=(int*)malloc(n*n*sizeof(int));
	
	rellenamat(mat,n);

	imprime(mat,n);


	
	free(mat);
	return 0;
}

void rellenamat(int *mat, int n){
	int i,j;
		
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






