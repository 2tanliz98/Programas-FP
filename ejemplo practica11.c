#include <stdio.h>
/*
 Este programa genera un arreglo unidimensional de 5 elementos y
 accede a cada elemento del arreglo a través de un ciclo for.
*/
int main (){
 #define TAMANO 5
 int lista[TAMANO] = {10, 8, 5, 8, 7};

 printf("\tLista\n");
 for (int indice = 0 ; indice < 5 ; indice++){
 printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
 }

 printf("\n");

 return 0;
}
