#include <stdio.h>
/*
 Este programa trabaja con aritmética de apuntadores para acceder a los
valores de un arreglo.
*/
int main () {
 int arr[] = {5, 4, 3, 2, 1};
 int *apArr;
 apArr = arr;

 printf("int arr[] = {5, 4, 3, 2, 1};\n");
 printf("apArr = &arr[0]\n");

 int x = *apArr;
 printf("x = *apArr \t -> x = %d\n", x);

 x = *(apArr+1);
 printf("x = *(apArr+1) \t -> x = %d\n", x);

 x = *(apArr+2);
 printf("x = *(apArr+2) \t -> x = %d\n", x);

 return 0;
}

