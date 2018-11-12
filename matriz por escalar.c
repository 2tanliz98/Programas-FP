#include <stdio.h>
#include <conio.h>
/*matriz 2x2 por un escalar*/

int x,y,z;
int arr1 [5][5], arr2 [5][5];

main ()
{
	printf ("Introduce un numero escalar");
	scanf ("%d", &z);
	
	for (x=1; x<3; x++)
	{
		for (y=1;y<3;y++)
		{
			printf ("\n Introduce el valor [%d][%d]: ",x,y);
			scanf ("%d", &arr1 [x][y]);
		}
	}
	
	for (x=1;x <3;x++)
	{
		for (y=1;y <3;y++)
		{
			arr2 [x][y] = (arr1 [x][y]*z);
		}
	}
	for (x=1;x<3;x++)
	{
		for (y=1;y<3;y++)
		{
			printf ("\nEl vector resultante [%d][%d] es %d \n",x,y,arr2[x][y]);
		}
	}
	getch ();
	
}
