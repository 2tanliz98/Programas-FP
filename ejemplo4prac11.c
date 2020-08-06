#include <stdio.h>
/*
 Este programa muestra el manejo de cadenas en lenguaje C.
*/
int main(){
 char palabra[20];
 int i=0;
 printf("Ingrese una palabra: ");
 scanf("%s", palabra);
 printf("La palabra ingresada es: %s\n", palabra);
 for (i = 0 ; i < 20 ; i++){
 printf("%c\n", palabra[i]);
 }
 return 0;
}
