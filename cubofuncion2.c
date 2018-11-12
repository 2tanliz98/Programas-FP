#include <stdio.h>
#include<conio.h>
int cubo ();
int  c, x;
int main ()
{		
	cubo (x);
	printf ("\n El cubo del numero %d es igual a: %d ",x,c);
}

int cubo (){
	
	printf ("Ingresa un numero: ");
	scanf ("%d",&x);
	c= (x*x*x);
	return (c);
}
