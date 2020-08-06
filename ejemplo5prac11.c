#include<stdio.h>
/* Este programa genera un arreglo de dos dimensiones (arreglo
multidimensional) y accede a sus elementos a través de dos ciclos
for, uno anidado dentro de otro.
*/
int main(){
 int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int i, j;
 printf("Imprimir Matriz\n");
 for (i=0 ; i<3 ; i++){
 for (j=0 ; j<3 ; j++){
 printf("%d  ",matriz[i][j]);
 }
 printf("\n");
 }
 return (0);
}
