#include <stdio.h>
void llamar();
int main ()
{
	int j;
	for (j=0; j<5; j++){
		llamar();
	}
}

void llamar (){
	static int numVeces =0;
	printf ("Esta funci%cn se ha llamado  %d veces\n", 162, ++numVeces);
}
