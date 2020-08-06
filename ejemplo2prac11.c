#include<stdio.h>
/*
 Este programa accede a las localidades de memoria de distintas variables a
través de un apuntador.
*/
int main () {
 int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
 int *apEnt;
 apEnt = &a;

 printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");
 printf("apEnt = &a\n");

 b = *apEnt;
 printf("b = *apEnt \t-> b = %i\n", b);

 b = *apEnt +1;
 printf("b = *apEnt + 1 \t-> b = %i\n", b);

 *apEnt = 0;
 printf("*apEnt = 0 \t-> a = %i\n", a);

 apEnt = &c[0];
 printf("apEnt = &c[0] \t-> apEnt = %i\n", *apEnt);

 return 0;
}
