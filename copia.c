#include<stdio.h>
#include<string.h>

int main(){
	
	char cadena[100],cadconcatena[8]="añadida";
	
	printf("Introduce una cadena:\n");
	scanf("%s",cadena);
	printf("La cadena tiene %d letras\n",strlen(cadena));

	if(strcmp(cadena,"compara")==0){
		
		printf("%s es igual a 'compara'\n",cadena);
				
		strcat(cadena,cadconcatena);		
		printf("La cadena concatenada es: %s\n",cadena);
	}
	else{
		printf("%s no es igual a 'compara'\n",cadena);
	}
	return 0;
}
