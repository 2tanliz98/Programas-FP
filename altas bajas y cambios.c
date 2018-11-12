//menu altas bajas y cambios switch case
#include <stdio.h>
#include <conio.h>
#include <conio.h>
#include <stdlib.h>

int v, volver;
main ()
{
	printf ("\t\tMen%c\n", 163);
	do 
	{
	
	printf ("Selecciona una opci%cn\n",162);
	printf ("1. Altas\n");
	printf ("2. Bajas\n");
	printf ("3. Cambios\n");
	scanf ("%d", &v);
	
	
	switch (v)
	{
		case 1: 
			printf ("\n Seleccionaste Altas");
			break;
		
		case 2:
			printf ("\n Seleccionaste Bajas");
			break;
		
		case 3:
			printf ("\n Seleccionaste Cambios");
			break;
			
		default:
			printf ("\n Selecci%cn inv%clida", 162, 160);
			break;
		}
		
		printf ("\n Desea volver?\n PRESIONA 1");
		scanf ("%d", &volver);
		system ("cls");
	}
	while (volver == 1);

	getch ();
}
