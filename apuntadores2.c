#include <stdio.h>
#include <conio.h>
short arr[5] = {91,28,73,46,55};
short *apArr;

main()
{
	apArr = arr;
	
	printf ("*apArr = %i\n", *apArr);
	
	printf ("*(apArr+2) = %i\n", *(apArr+2));
	getch ();
}
