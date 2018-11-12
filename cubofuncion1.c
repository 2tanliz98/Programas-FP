#include <stdio.h>
#include<conio.h>
int cubo (int x);
int  c, x;
int main ()
{
	printf ("Ingresa un numero: ");
	scanf ("%d",&x);
	cubo (x);
	printf ("\n El cubo del numero %d es igual a: %d ",x,c);
	getch();
return 0;
}

int cubo (int x)
{
	c= (x*x*x);
	return (c);
}
