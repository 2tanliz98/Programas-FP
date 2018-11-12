#include <stdio.h>
#include <conio.h>

float s, inc, p, a;

main ()
{
	
	s = 3000;
	printf ("Cu%cntos a%cos has trabajado?", 160, 164);
	scanf ("%f", &a);
	
	if (a<=1)

		printf (" Sin incremento de sueldo %c%c", 41, 58);
	

	else
	{
	
		if (" 2 <= a <= 5")
		
		{
			p = ((s*10)/100);
			inc = s + p;
			
			printf ("Tu sueldo con incremento es de: %.2f", inc);
		}

	
			else 
				
			{
			if  (" 6 <= a <= 10")
			
			{
				 p= ((s*15)/100);
				inc = s + p;
				
				printf ("Tu sueldo con incremento es de: %.2f", inc);
			}
		
				else 
					
					{
						p = ((s*20)/100);
						inc = s + p;
						
						printf ("Tu sueldo con incremento es de: %.2f", inc);
					}
		}

	}
	getch();
	
}

