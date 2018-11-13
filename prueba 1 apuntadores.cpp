#include <stdio.h>
const char *mensaje[8]= {"uno", "dos", "tres"};	
int cont;
main ()
{	
	for (cont =0; cont<3; cont++){
		printf ("%s \n", mensaje [cont]);
	}
	
}
