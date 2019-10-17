#include<stdio.h>
/* este programa obtiene el promedio de calificaciones ingresadas
por el usuario. Las calificcaciones se leen desde la entrada estandar(teclado)
la insercion de calificaciones termina cuando el usuario presiona
una tecla diferent de "s" o "S"
*/
int main(){
	char op='n';
	double sum=0, calif=0;
	int veces=0;
	
	do{
		printf("\tsuma de calificaciones:\n");
		printf("Ingresa la calificaion:\n");
		scanf("%lf",&calif);
		veces++;
		sum=sum+calif;
		printf("¿Desea sumar otra? S/N\n");
		setbuf(stdin, NULL); //limpia el buffer
		scanf("%c",&op);
		getchar();
		
		
	}while(op == 'S' || op == 's');
	printf("el promedio de las calificaciones ingresada es: %.2lf\n",sum/veces);
	
	
	return 0;
	
}
