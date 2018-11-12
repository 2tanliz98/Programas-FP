#include <stdio.h>
#include <conio.h>
#include <conio.h>
#include <stdlib.h> 
int  volver, op;
enum v {altas, bajas, cambios};

main ()
{
	printf ("\t\tMen%c\n", 163);
	do 
	{
	printf ("Selecciona una opci%cn\n",162);
	printf ("1. Altas\n");
	printf ("2. Bajas\n");
	printf ("3. Cambios\n");
	scanf ("%d", &op);
	
	
	switch (op-1)
	{
		case altas: 
			printf ("\n Seleccionaste Altas");
			break;
		
		case bajas:
			printf ("\n Seleccionaste Bajas");
			break;
		
		case cambios:
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
