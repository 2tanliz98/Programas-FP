#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf

int num=1, cont,m;
main ()
{
	p("TABLAS DE MULTIPLICAR");

	for (num=1; num <= 10; num ++){
		p("\n La tabla de %d es: ",num);
			for (cont = 0; cont<=10; cont ++)
		{
		m= (num*cont);
		p("\n%d = %d\n",cont,m);
		}
	}

	
	getch ();
}
