#include <stdio.h>
#include <conio.h>
/* romedio de 3 numeros*/

int a,b,c;
float prom;

main ()
{
	
	printf ("Introduce el primer valor\n");
	scanf ("%d", &a);
	
	printf ("Introduce el primer valor\n");
	scanf ("%d", &b);
	
	printf ("Introduce el primer valor\n");
	scanf ("%d", &c);
	
	prom = ((a+b+c)/3);
	
	printf ("El promedio de los tres valores es: %.2f", prom);
	
	getch ();

}
