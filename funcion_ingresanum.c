#include <stdio.h>
#include <conio.h>
int num ();
int lnum ();
int x,y;

int main()
{
	num ();
	y = x*100;
	printf ("\nEl n%cmero %d x 100 es : %d",163,x, y);
	getchar();
}

int num(){
	
	lnum ();
	printf ("\n El numero es: %d",x);
	return (x);
}

int lnum (){
	printf ("\n Ingresa un numero: ");
	scanf ("%d",&x);
	return (x);
}
