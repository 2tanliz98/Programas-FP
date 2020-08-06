#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define p printf
#define s scanf
/*Factorial de un numero*/
int m, n, f, l;
main ()

{
	p("\t\tCalcula el factorial de un numero menor a 5\n");
	
	do 
	{
		m=1;
		
		p("Dame un numero\n");
		s("%d", &n);
		
		if ( n >0 && n<= 5)
		{
			for (f=1; f <= n; f++)
			{
				m = (f*m);
			}
		
		p("\El factorial de %d es: %d", n,m);
		}
		else 
		{
			p("Numero fuera de rango");
		
		}
		p("\nQuieres repetir el ejercicio?\n Si = 1\n No = 0 ");
			s("%d", &l);
			
			system ("cls");
	}
	while (l==1);
	
	getch ();
	
}
