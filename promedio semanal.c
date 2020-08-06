#include <stdio.h>
#include <conio.h>
char *dia[] = {"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
int i,gastos[8],s=0,prom;

main ()
{
	printf ("\nGastos de la semana");
	for (i=0;i<7;i++){
			printf ("\n Ingresa los gastos del d%ca %s: ",161,dia[i]);
			scanf ("%d", &gastos[i]);
			s = (s+gastos[i]);
	}
	float prom = (float)s/i;
	printf ("\nEl promedio de los gastos de la semana es: %.2f",prom);
	getch ();

}
