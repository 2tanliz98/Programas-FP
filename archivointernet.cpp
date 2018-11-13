#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
 ofstream archivo;
 string nombre_archivo, frase;
 char res;
 
 cout << "Ingrese el nombre del archivo: ";
 getline(cin,nombre_archivo);
 nombre_archivo += ".txt";
 
 archivo.open(nombre_archivo.c_str(),ios::out);
 
 if(archivo.fail()){
  cout << "No se pudo abrir el archivo";
  exit(1);
 }
 
 cout << "Desea ingresar una frase? (s/n): ";
 cin >> res;
 
 while(res == 's' || res == 'S'){
  cout << "Ingrese una frase: ";
  fflush(stdin);
  getline(cin,frase);
  
  frase += '\n';
  
  archivo << frase;
  
  cout << "Desea ingresar otra frase? (s/n): ";
  cin >> res;
 }
 
 archivo.close();
 
 getch();
 return 0;
}
