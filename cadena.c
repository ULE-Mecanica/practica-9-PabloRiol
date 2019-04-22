#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void quitaespacios(int num,char *puntero);

int main(){
	int *p,n;
	
	printf("Dame la cantidad de espacios utilizaras\n");
	scanf("%d",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	printf("Escriba la cadena:\n");
	scanf("%s",&*p);	
	quitaespacios(n,*p);
	
	return 0;
}

void quitaespacios(int num,char *puntero){
	
	int i,a=0;
	
	if(puntero[a]!='\0'){
		
		if(puntero[a]==' '){
			
			for(i=a;i<num;i++){
				
				puntero[i]=puntero[i+1];
			}
		}
	}
	else{
	
		printf("%s",puntero[i]);
	}

}
