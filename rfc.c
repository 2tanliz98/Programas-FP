#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char nom1 [20], app [35], apm [35], d[4],w[4],a[4];
char rfc [15];
 int main ()
{
	printf ("Ingresa tu nombre:  ");
	gets (nom1);
	printf ("\n Ingresa tu apellido paterno: ");
	gets (app);
	printf ("\n Ingresa tu apellido materno: ");
	gets (apm);
	printf ("\n Ingresa el  d%ca en que naciste: ",161);
	gets (d);
	printf ("\n Ingresa el mes en  que naciste: ");
	gets (w);
	printf ("\n Ingresa el a%co en que naciste ",164);
	gets (a);	
	
	app [0] = toupper (app [0]);
	rfc[0] = app[0];
	app [1] = toupper (app [1]);
	app [2] = toupper (app [2]);
	
	if (app[1] == 'a'|| app[1] == 'A' ||
		app[1] == 'e'|| app[1] == 'E'||
		app[1] == 'i'|| app[1] == 'I'||
		app[1] == 'o'|| app[1] == 'O'||
		app[1] =='u' || app[1] == 'U')
			rfc [1] = app[1];
			
		else {
			if (app[2] == 'a'|| app[2] == 'A' ||
		app[2] == 'e'|| app[2] == 'E'||
		app[2] == 'i'|| app[2] == 'I'||
		app[2] == 'o'|| app[2] == 'O'||
		app[2] =='u' || app[2] == 'U')
				rfc [1] = app[2];
		}
	
	apm [0] = toupper (apm [0]);
	rfc[2] = apm [0];
	nom1 [0] = toupper (nom1 [0]);
	rfc[3] = nom1[0];
	
	rfc [4] = a[2];
	rfc [5] = a[3];
	
	
	if (strlen (w) == 1){
		w[1] = w[0];
		w[0] = '0';
		}
	rfc [6] = w[0];
	rfc [7] = w [1];
	
	
	if (strlen (d)==1){
		d[1]= d[0];
		d[0]= '0';
		}

	rfc [8] = d[0];
	rfc [9] = d[1]; 
	strcat (rfc+9, "QZ2");
	
	printf ("\n Tu RFC es: %s",rfc);

	getch ();
	
}
