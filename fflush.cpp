#include <stdio.h>

int main()
{
   char a, b, c;

   printf( "Introduzca primer caracter: " );
   scanf( "%c", &a );
   printf( "Introduzca segundo caracter: \n" );
   fflush( stdin );
   scanf( "%c", &b );
   printf( "Introduzca tercer caracter: \n" );
 	fflush( stdin );
	scanf( "%c", &c );
   printf( "Los valores son: %c, %c, %c ", a, b, c );

   return 0;
}
