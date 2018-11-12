#include <stdio.h>
#include <conio.h>
/*promedio de 5 números*/

int a;
float s = 0;
float p= 0, arr [8];

main ()
{
	for (a=1; a<6; a++)	
	{
	
		printf ("Dame el valor del elemento %d: ",a);
		scanf ("%f", &arr [a]);
		s = (s+arr[a]);
	}

	a--;
	p=(s/a);
	printf ("El promedio es: %.2f",p);
	
	getch ();		
	
}
