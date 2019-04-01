#include <stdio.h>
#include<stdlib.h>

int main(){
	
	int min,i,*v,n;
	
	printf("Dime el numero de elementos que quieres que compare:\n");
	scanf("%d",&n);
	
	printf("Escribeme los %d numeros que comparo.\n",n);
	
	v= (int *)malloc(n* sizeof(int));
	
	for(i=0;i<n;i++){
		
		
		scanf("%d",&*(v+i));
		
	}
	min=*(v+0);
	
	for(i=0;i<n;i++){
		
		if((*v+i)<min){
			min=*(v+i);
		}
		
	}
	
	printf("El valor menor es %d:\n",min);
	free(v);
	
	return 0;
}

















