#include <stdio.h>
#include <conio.h>
/*sueldos*/
int a;
float salario, nuevosalario;
int main ()

{
	printf ("Cu%cntos a%cos has trabajado?", 160,164 );
	printf ("\n 1. Un a%co o menos", 164);
	printf ("\n 2. De 2 a 5 a%cos", 164);
	printf ("\n 3. De 6 a 10 a%cos", 164);
	printf ("\n 4. M%cs de 10 a%cos\n",160, 164);
	scanf ("%d", &a);
	
	printf ("Cu%cl es su sueldo actual?\n", 160);
	scanf("%f", &salario);
	
	switch (a) {
		
		case 1 : printf ("\n No hay aumento en el sueldo");
				break;
		
		case 2 : 
				nuevosalario = (salario+ (salario*0.10));
				printf ("\n Su nuevo sueldo es de %c%f", 36, nuevosalario);
				break;
		
		case 3: 
				nuevosalario = (salario+ (salario*0.15));
				printf ("\n Su nuevo sueldo es de %c%f", 36, nuevosalario);
				break;
		
		case 4 : 
				nuevosalario = (salario+ (salario*0.20));
				printf ("\n Su nuevo sueldo es de %c%f", 36, nuevosalario);
				break;
				
	}
	
	getch ();
}
