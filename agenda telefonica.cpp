#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
   ofstream archivo;
   archivo.open("archivo.txt");
 char res;
 int i;
 string f,n,d,t;
 
 if(archivo.fail()){
  cout << "No se pudo abrir el archivo";
  exit(1);
 }
	cout << "Desea ingresar un nuevo contacto? (s/n): ";
 	cin >> res; 
 	i=0;
 	
 while(res == 's' || res == 'S'){
	i++;

	printf ("Contacto %d\n",i);
	archivo << "Nombre: " << endl;
	cout << "Nombre: ";
	cin >> n;
	archivo << n << endl;
	archivo << "Domicilio: " << endl;
 	cout << "Domicilio: ";
 	cin >> d;
	archivo <<  d << endl;

	fflush( stdin );
	archivo << "Telefono: " << endl;
 	cout << "Telefono: ";
    cin >> t; 
	archivo << t << endl;
  		fflush(stdin);
  
    getline(cin,f);
  f += '\n';

  cout << "Desea ingresar un nuevo contacto? (s/n): ";
  cin >> res;
  
 }
  archivo.close();
  
 getch();
 return 0;
}
