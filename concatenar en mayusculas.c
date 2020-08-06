#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[20];
    char lname[20];

    printf ("\n Enter your first name :");
    scanf (" %s", fname);

    printf ("\n Enter your last name  :");
    scanf (" %s", lname);

    fname [0]=toupper(fname[0]);
    lname [0]=toupper(lname[0]);


    printf ("\n # your name is %s %s #\n",fname, lname);
    
    getch ();
    
    
	}
