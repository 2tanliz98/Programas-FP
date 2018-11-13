#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void fun_aleatoria();
int main ()
{
	fun_aleatoria ();
	return 0;
}

void fun_aleatoria()
{
	int num;
	srand (time(NULL));
	
	num = 1 + rand () % 10;
	printf ("%d",num);
}
