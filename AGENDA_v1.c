#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define p printf
#define s scanf
#define fp fprintf
#define fs fscanf
#define MAX 100

void Solicitar();
void Consultar();
void Imprimir();
void Borrar ();
int i,opc,n;

	struct datos
	{
		char nombre[20];
		char apellidoP[20];
		char apellidoM[20];
		char telefono[15];
		char direccion[100];
	};
struct datos contacto [50];
FILE *agenda;

int main()
{
	p("\t\t\tA G E N D A\n\n\n");
	if((agenda=fopen("Agenda.txt","w+"))==NULL)
	{
		p("No se puede abrir .\n");
	}
	else
	{
				do
		{
			p("\tMENU\n");
			p("1)Altas \n");
			p("2)Bajas\n");
			p("3)Consultas\n");
			p("4)Salir\n");
			p("Elige una opcion: ");
			s("%d",&opc);
			
			switch(opc)
			{
				case 1:
					p("¿Cuantos contactos desea agregar?\n");
					s("%d",&n);
					for(i=1;i<=n;i++)
					{
						Solicitar();
					}
					Imprimir();
					fclose(agenda);
					p("Contactos Guardados .\n");
					
					
				break;
				
				case 2:
					Borrar ();
				break;
				
				case 3:
					Consultar();	
				break;
				
				case 4:
						p("Programa terminado\n");
				break;
				
				default:
						p("Opcion no valida\n");
				break;

			}
			system("pause");
			system("cls");
		}while (opc!=4);
			
	}
	
	
	return 0;
}

void Solicitar ()
{
	p("Nombre %d: ",i);
	s("%s",&contacto[i].nombre);
	strupr(contacto[i].nombre);	
	
	p("Apellido paterno %d: ",i);
	scanf("%s",&contacto[i].apellidoP);
	getchar();
	strupr(contacto[i].apellidoP);
	
	p("Apellido materno %d: ",i);
	s("%s",&contacto[i].apellidoM);
	strupr(contacto[i].apellidoM);
	
	p("Telefono %d: ",i);
	s("%s",&contacto[i].telefono);
	strupr(contacto[i].telefono);
	
	p("Direccion %d (sin espacios, separandola por un punto o guion bajo): ",i);
	s("%s",&contacto[i].direccion);
	strupr(contacto[i].direccion);
	p("\n");
}

void Consultar()
{
		char nombre[20];
		char apellidoP[20];
		char apellidoM[20];
		char telefono[15];
		char direccion[100];
agenda=fopen("Agenda.txt","r");
					if (agenda != NULL) 
					{
					  
					 while (feof(agenda) == 0) 
					 { 
					 fs (agenda, "%s", nombre);
					 p("%s", nombre);
					 fs (agenda,"%s", apellidoP);
					 p("%s", apellidoP);
					 fs (agenda, "%s", apellidoM);
					 p("%s", apellidoM);
					 fs (agenda,"%s", direccion);
					 p("%s", direccion);
					 fs (agenda, "%s", telefono);
					 p("%s", telefono);
					 } 
					fclose(agenda);
				
					}else {
					 printf("El archivo no existe.\n"); 
					 } 
				
}

void Imprimir()
{
	fp(agenda,"\t\tA G E N D A\n\n");
	for(i=1;i<=n;i++)
	{
		fp(agenda,"\nContacto %d\n",i);
		fp(agenda,"Nombre : %s %s %s\n",contacto[i].nombre,contacto[i].apellidoP,contacto[i].apellidoM);
		fp(agenda,"Direccion : %s\n",contacto[i].direccion);
		fp(agenda,"Telefono : %s\n",contacto[i].telefono);
		fp(agenda,"\n");
	}
}

void Borrar (){
	
	int l, linea, nlinea =0;
	char LINEA [MAX], c, ch;
	FILE *destino, *agenda;

	
	p(" Introduce el numero de contacto que deseas borrar: ");
	s("%d", &l);
	
	linea = l+5 ;
	agenda = fopen ("agenda.txt", "r+");
	destino = fopen ("destino.txt", "w+");
	
	while (fgets (LINEA, MAX, agenda) != NULL){
		
		if ((ch = getc (agenda))!= EOF)
		ungetc (ch,agenda);
		nlinea ++;
		if (nlinea != linea)
		{
			fputs (LINEA,destino);
		}
	}   
	
	p("\n El contacto ha sido eliminado");
	fclose (agenda);
	fclose (destino);
	remove ("agenda.txt");
	rename ("destino.txt", "agenda.txt");
} 	
