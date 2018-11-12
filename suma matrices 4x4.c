#include <stdio.h>
#include <conio.h>

int x,y,z;
int arr1 [5][5], arr2 [5][5], arr3[5][5];

main ()
{
	printf ("\n Valores para la matriz 1: ");
	for (x=0; x<4; x++)
	{
		for (y=0;y<4;y++)
		{
			printf ("\n Introduce el valor [%d][%d]: ",x,y);
			scanf ("%d", &arr1 [x][y]);
		}
	}
	printf ("\n Valores para la matriz 2: ");
	for (x=0; x<4; x++)
	{
		for (y=0;y<4;y++)
		{
			printf ("\n Introduce el valor [%d][%d]: ",x,y);
			scanf ("%d", &arr2 [x][y]);
		}
	}
	
	for (x=0;x <4;x++)
	{
		for (y=0;y <4;y++)
		{
			arr3 [x][y] = (arr1 [x][y]+ arr2[x][y]);
		}
	}
	
	printf ("\n El resultado de la suma de las matrices es:\n");
	 for (x=0 ; x<4 ; x++){
	 for (y=0 ; y<4 ; y++){
	 printf("%d  ",arr3[x][y]);
	 }
	 printf ("\n");
}
	getch ();


}
