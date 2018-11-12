#include <stdio.h>
#include <conio.h>
#define p printf
/*uso de do while*/
int a;
main()

{
	a=1;
	
	do {
		
		p("%d\t", a);
		a++;
	}
	
		while (a<= 100);
	
	getch();
	
}
