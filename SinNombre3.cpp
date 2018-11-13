#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//char *nom[] = {"Samuel","Brian","Liz","Cris","Kevin","Eduardo","Diana","Ale","Tania","Nelly","Daniel"};
int rango_sup, num;
char p[];

int main ()
{
	printf ("Ingrese el numero de participantes: ");
	scanf ("%d",&rango_sup);
	
	for (int cont = 1; cont <= rango_sup; cont ++){
		printf ("\n participante %d :  ", cont);
		scanf ("%s", &p[cont]);
	}
	
/*	srand (time(NULL)); 
	for ( int cont = 1; cont <= rango_sup; cont ++){
		printf ("\n %s : %d", *p[cont], num = (1 + rand () % rango_sup ));
	}*/
	
	
getch ();
return 0;
}
