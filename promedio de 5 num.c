#include <stdio.h>
#include <conio.h>
int p,c,s=0, arr [7];
main()
{
	for (c=1;c<6;c++){
			printf ("\n Ingese el valor %d:  ",c);
			scanf ("%d", &arr[c]);
			s = (s+arr[c]);
	}
	c--;
	float p = (float)s/c;
	printf ("\nEl promedio de los numeros intoducidos es: %.3f",p);
	getch ();

}
