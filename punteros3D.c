#include<stdio.h>
#include<stdlib.h>

int dameprimo(int num);
int esprimo(int num);
	
int main(){

	int f,c;
	int *mat;
	int i,j;
	
	
	printf("Introduce el numero de filas: ");
	scanf("%d",&f);
	
	printf("Introduce el numero de columnas: ");
	scanf("%d",&c);
	
	mat=(int*)malloc(f*c*sizeof(int));
	
	
	int k=0;
		
		for(i=0;i<f;i++){
			for(j=0;j<c;j++){
				k=dameprimo(k);
				mat[(i*c)+j] = k;
			}
		}
		
		for(i=0;i<f;i++){
			for(j=0;j<c;j++){
				printf("%d  ",mat[(i*c)+j]);
			
			}
			printf("\n");
		}
		free(mat);

	return 0;
}


int dameprimo(int num){
	num++;
	
	while(!esprimo(num)){
		num++;
	}
	return num;
}

int esprimo(int num){
	int i;
	
	for(i=2;i<num; i++){
		if(num%i==0){
			return 0;
		}
	}
	return num;
}
























