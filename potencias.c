#include <stdio.h>
#include <conio.h>
#include <math.h>
#define p printf
#define s scanf

int x,y,r;
main()
{
	
	for (x=0; x<=5; x++)
	{
		p("\n Las potencias del numero %d son: ", x);
		for (y=0; y<=10; y++)
		{
		
		r = pow (x,y);
		p("\n %d",r);
	}

	}
	getch();

}
