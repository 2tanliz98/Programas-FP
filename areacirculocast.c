#include <stdio.h>
#include <conio.h>
/* calcula el area de un circulo*/
const float PI=3.14159;
int r, a;

main ()
{
	printf ("Dame el radio del c%crculo", 161);
	scanf ("%d", &r);
	
	float a = (float)r*r*PI;
	
	printf ("El %crea del c%crculo es: %f", 160, 161, a);
	
	getch ();
	
}

