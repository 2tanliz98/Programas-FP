#include <stdio.h>
char c;
char *apc;

main ()
{
	apc =&c;
	
	for (c='A';c<='Z'; c++){
		printf ("%c - ", *apc);
	}
}
