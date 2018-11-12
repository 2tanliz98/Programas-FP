#include <stdio.h>
#include <conio.h>

int n1, n2, n3; 
main ()

{
	printf ("Dame un numero: ");
	scanf ("%d", &n1);
	printf ("Dame un numero: ");
	scanf ("%d", &n2);
	printf ("Dame un numero: ");
	scanf ("%d", &n3);
	
	if (n1>=n2 && n1>=n3 && n2>n3)
		{
		printf ("\n El orden de mayor a menor de los n%cmeros introducidos es:\n", 163);
		printf ("1. %d\n", n1);
		printf ("2. %d\n", n2);
		printf ("3. %d\n", n3);
		}
		else 
			if (n1>=n2 && n1>=n3 && n3>n2)
				{
	
				printf ("\n El orden de mayor a menor de los n%cmeros introducidos es:\n", 163);
				printf ("1. %d\n", n1);
				printf ("2. %d\n", n3);
				printf ("3. %d\n", n2);
				}
	
		else	if (n2>=n1 && n2>=n3 && n1>n3)
				{
				printf ("\n El orden de mayor a menor de los n%cmeros introducidos es:\n", 163);
				printf ("1. %d\n", n2);
				printf ("2. %d\n", n1);
				printf ("3. %d\n", n3);	
				}
				
			else 	if (n2>=n1 && n2>=n3 && n3>=n1)
				{

				printf ("\n El orden de mayor a menor de los n%cmeros introducidos es:\n", 163);
				printf ("1. %d\n", n2);
				printf ("2. %d\n", n3);
				printf ("3. %d\n", n1);
				}
				
					else 	if (n3>=n1 && n3>=n2 && n1>n2)
					{
						printf ("\n El orden de mayor a menor de los n%cmeros introducidos es:\n", 163);
						printf ("1. %d\n", n3);
						printf ("2. %d\n", n1);
						printf ("3. %d\n", n2);
					}
				
					else 	if (n3>=n1 && n3>=n2 && n2>n1)
					{
						printf ("\n El orden de mayor a menor de los n%cmeros introducidos es:\n", 163);
						printf ("1. %d\n", n3);
						printf ("2. %d\n", n2);
						printf ("3. %d\n", n1);	
					}

	
	getch ();
	
}
