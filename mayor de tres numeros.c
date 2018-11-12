#include <stdio.h>
#include <conio.h>
/* Mayor de tres numeros*/

int n1,n2,n3;

main ()
{

	printf( "\n   Introduzca el primer n%cmero (entero): ", 163 );
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo n%cmero (entero): ", 163 );
    scanf( "%d", &n2 );
    printf( "\n   Introduzca el tercer n%cmero (entero): ", 163 );
    scanf( "%d", &n3 );

    if ( n1 >= n2 && n1 >= n3 )
        printf( "\n   %d es el mayor", n1 );
    else
	{
	
        if ( n2 > n3 )
            printf( "\n   %d es el mayor", n2 );
        else
            printf( "\n   %d es el mayor", n3 );
        }
 
    getch();

	
	
	
	
}
