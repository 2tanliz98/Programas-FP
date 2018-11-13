#include <stdio.h>

 struct agenda{ 
 char nom[30];
 char dom[40];
 char num[10];
 };
 char f,res;
 int i;
 int main ()
 {
  FILE *agenda;
 agenda = fopen("agenda.txt", "r+");
 printf ("\t\tAGENDA\n");
     fprintf(agenda, "\t\t\tAgenda\n");
printf ("Desea agregar un nuevo contacto? (s/n)");
 scanf ("%s",&res);
 
	i=0;
 while (res == 's' || res == 'S'){
	i++;
	printf ("\t\nContacto %d\n",i);
	fprintf(agenda,"\t\nConstacto %d\n",i);
		
  struct agenda a;
	printf( "Nombre: "); 
	scanf("%s", &a.nom);
	fprintf (agenda,  "\nNombre:\n");
	fprintf (agenda,  a.nom);

	printf("Domicilio: ");
	scanf("%s", &a.dom);
	fflush( stdin );
	fprintf (agenda,  "\nDomicilio:\n");
	fprintf (agenda,   a.dom);
	
	printf("Telefono: ");
	scanf("%s", &a.num);
	fprintf (agenda,  "\nTelefono:\n");
	fprintf (agenda, a.num);
 	
	//printf("Nombre: %s\n Domicilio: %s\n Telefono: %s\n",a.nom, a.dom,a.num);		
 printf ("Desea agregar un nuevo contacto? (s/n)");
 scanf ("%s",&res);
 }

 fclose(agenda);

 }
	
