//ecuaciones con ternaria
#include <stdio.h>
#include <conio.h>
#include <math.h>

float y, x;
main ()

{
	
	printf ("Indroduzca el valor para x  ");
	scanf ("%f", &x);
	
	if (x == 2)
		printf ("No hay soluci%cn, prueba con otro numero", 163);
	else
	{
	
	y = x < 2 ?  (x*x+3*x-2) : (x*x+2*x+3);	
	
	printf ("El resultado de y es: %f ",y);
	}
		
		
	
	getch ();
}
