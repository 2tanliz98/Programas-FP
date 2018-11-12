#include <stdio.h>
#include <conio.h>
/*menú suma, resta, multiplicación y división*/

int x,s,r,m,d,a,b, volver;

main ()
{
	do {
	
		printf ("\t\t\tM E N U");
		printf ("\n 1. Suma");
		printf ("\n 2. Resta");
		printf ("\n 3. Multiplicaci%cn", 162);
		printf ("\n 4. Divisi%cn", 162);
		
		printf ("\nSeleccione una opci%cn\n", 162);
		scanf ("%d", &x);
		
			switch (x)
			{
				case 1:
					printf ("\t\t\n Suma de dos n%cmeros", 163);
					printf ("\nIngrese el primer valor");
					scanf ("%d", &a);
					printf ("\n Ingrese elsegundo valor");
					scanf ("%d", &b);
					
					s = (a+b);
					
					printf ("\nEl resultado es: %d", s);
					break;
				
				case 2:
					printf ("\t\t\n Resta de dos n%cmeros", 163);
					printf ("\nIngrese el primer valor");
					scanf ("%d", &a);
					printf ("\n Ingrese elsegundo valor");
					scanf ("%d", &b);
					
					r = (a-b);
					
					printf ("\nEl resultado es: %d", r);
					break;
				
				case 3:
					printf ("\t\t\n Multiplicaci%cn de dos n%cmeros", 162, 163);
					printf ("\nIngrese el primer valor");
					scanf ("%d", &a);
					printf ("\n Ingrese elsegundo valor");
					scanf ("%d", &b);
					
					m = (a*b);
					
					printf ("\nEl resultado es: %d", m);
					break;
				
				case 4:
					printf ("\t\t\n Divici%cn de dos n%cmeros",162, 163);
					printf ("\nIngrese el primer valor");
					scanf ("%d", &a);
					printf ("\n Ingrese elsegundo valor");
					scanf ("%d", &b);
					
					d = (a/b);
					
					printf ("\nEl resultado es: %d", d);
					break;
				
				default:
					printf ("\nSelecci%cn inv%clida",162, 160);
					break;
				
			}
			
			printf ("\nSi desea regresar al men%c presione 1\n Si desea terminar presione cualquier otra tecla\n");
			scanf ("%d", &volver);
	}
	
	while (volver == 1);
	

getch ();	
}
