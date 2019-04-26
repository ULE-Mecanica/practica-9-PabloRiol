#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j;
	int *mat;
	int alumnos,notas;
	float cont=0;
	float total=0;
	printf("Introduce el numero de alumnos.\n");
	scanf("%d",&alumnos);
	
	printf("Introduce el numero de notas.\n");
	scanf("%d",&notas);	
	
	mat=(int*)malloc(alumnos*notas*sizeof(int));

	
	for(i=0;i<alumnos;i++){
		for(j=0;j<notas;j++){
			printf("Introduce la nota %d del alumno %d.\n",j+1,i+1);
			scanf("%d",&mat[i*alumnos+j]);
		}
	}
	
	for(i=0;i<alumnos;i++){
		for(j=0;j<notas;j++){
			printf("%d  ",mat[i*alumnos+j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<alumnos;i++){
		for(j=0;j<notas;j++){
			cont+=mat[i*alumnos+j];
			total+=mat[i*alumnos+j];
		}
		cont=cont/notas;
		printf("La nota media del alumno %d es: %.2f ",i+1,cont);
		cont=0;
	}
		total=total/(notas*alumnos);
		printf("La nota media del grupo es %.2f ",total);










	free(mat);

	return 0;
}



