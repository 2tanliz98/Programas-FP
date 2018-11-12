#include <stdio.h>
#include <conio.h>
/*calcular la suma de dos numeros cualquiera*/

int a,b, s;

main ()
{
	printf ("\t\tSUMA DE DOS NUMEROS ENTEROS\n");
	
	printf ("Dame el primer numero\n");
	scanf ("%d", &a);
	
	printf ("Dame el segundo numero numero\n");
	scanf ("%d", &b);
	
		s = (a+b);
	
	printf ("El resultado es: %d",s );
	
	getch ();
	return 0;
	
}
