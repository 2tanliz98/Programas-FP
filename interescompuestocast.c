#include <stdio.h>
#include <conio.h>
#include <math.h>

// interes comuesto

int p,r, z, x, n,f;

main()

{
	
	printf ("Cuanto es tu deposito inicial?");
	scanf ("%d", &p);
	
	printf ("\n A cuantos a%cos deseas invertir?",164);
	scanf("%d", &n);
	
	printf ("\n De cuanto es el porcentaje anual de interes compuesto?");
	scanf("%d", &r);
	
	x =p*1+p*r/100;
	pow (x,n);
	double f= (double) pow (x,n);
	printf ("El interes compuesto es de %lf",f);
		
	getch ();
	
}
