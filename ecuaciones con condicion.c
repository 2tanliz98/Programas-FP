#include <stdio.h>
#include <conio.h>
#include <math.h>
//* escuación con condiciones*//

int x,y,p,z;
float r;
int main ()

{
	printf ("Indroduzca el valor para x");
	scanf ("%d", &x);
	
	y = 2;
	if (x > 2)
		{ 
			p = pow(x,y);
			r = (3*x);
			z= (p+r-2);
			
			printf ("\n El valor de y es: %d", z);
		}
	else 
	{
		if (x < 2)
			{
					p=pow(x,y);
					r = (2*p);
					z = (r+x+3);
					
			
			printf ("\n El valor de y es: %d", z);
			}
		else 
				{
					printf ("No hay soluci%cn, prueba con otro numero", 163);
				}		
	}
	getch ();
}
