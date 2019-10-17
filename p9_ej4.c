#include <stdio.h>
// este promgrama genera una calculadora basica
int main(){
	int op,uno,dos;
	do{
		printf("----Calculadora---\n");
		printf("\Que desea hacer?\n");
		printf("1) Sumar\n");
		printf("2) Restar\n");
	    printf("3) Multiplicar\n");
	    printf("4) Dividir\n");
        printf("5) Salir\n");
		scanf("%i",&op);
		
		switch{
			case 1:
				printf("\tSumar\n");
				printf("Introduzca los numers a sumar separados por comas\n");
				scanf("%i, %i",&uno,&dos);
				printf("%i + %i = %i\n",uno,dos,(uno+dos));
				break;
			case 2:
				printf("\tRestar\n");
				printf("Introduzca los numeros a restar separados por comas\n");
				scanf("%i, %i",&uno,&dos);
				printf("%i - %i = %i\n",uno,dos,(uno-dos));
				break;	
			case 3:
				printf("\tMultiplicar\n");
				printf("Introduzca los numeros a multiplicar separados por comas\n");
				scanf("%i, %i",&uno,&dos);
				printf("%i * %i = %i\n",uno,dos,(uno*dos));
				break;		
			case 4:
				printf("\tDividir \n");
				printf("Introduzca los numeros a dividir separados por comas\n");
				scanf("%i, %i",&uno,&dos);
				printf("%i / %i = %i\n",uno,dos,(uno/dos));
				break;	
			case 5:
			    printf("\tSalir\n");
				break;
			default:
			     printf("no mamar");
				 			
		}
	}While(op!=5);
return 0;
}
