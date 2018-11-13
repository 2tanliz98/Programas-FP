#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>
 struct agenda{ 
 char nom[30];
 char dom[40];
 char num;
 };
  char res;
 int i;
 
int main(){
 FILE *archivo;
	archivo = fopen("archivo.txt", "r+");
 
 if(archivo != NULL){
 printf("El archivo no existe o no se tiene permisos de lectura/escritura.\n");
  exit(1);
 }
	printf ("Desea ingresar un nuevo contacto? (s/n): ");
 	scanf ("%c", &res); 
 	i=0;
 	
 while(res == 's' || res == 'S'){
	i++;

 	struct agenda a;
	printf( "Nombre: "); 
	scanf("%s", &a.nom);
	fprintf (archivo, "%s", a.nom);
	
	printf("Domicilio: ");
	scanf("%s", &a.dom);
	 	fflush( stdin );
	fprintf (archivo, a.dom);
	
	printf("Telefono: ");
	scanf("%s", &a.num); 
	fprintf (archivo, a.num);	 	
	
	printf("Alumno: %s\n Domicilio: %s\n Telefono: %s\n",a.nom, a.dom,a.num);

    getline(cin,f)
  f += '\n';

	printf ("Desea ingresar un nuevo contacto? (s/n): ");
 	scanf ("%c", &res); 
  
 }
 fclose(archivo);
  
 getch();
 return 0;
}
