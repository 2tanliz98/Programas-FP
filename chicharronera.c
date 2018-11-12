#include <stdio.h>
#include <conio.h>
#include <math.h>
#define p  printf
//Una vez más ecuación general

float a,b,c,x1,x2,z,r,r1;
main ()
{
	
	printf ("\t\t Hallar el valor de x por medio de la f%crmula general", 162);
	
		p("\nDame el valor de a: ");
		scanf ("%d", &a);
		
		p("\nDame el valor de b: ");
		scanf ("%d", &b);
		
		p ("\nDame el valor de c: ");
		scanf ("%d", &c);
		
	a == 0 ? p("\n El numero %d no es valido",a) : z=(-b/2*a);
	p("\n %f",z);
	r = ((b*b)-(4*a*c));
	
	r >=0 ? r1 == sqrt(r), p("\n  la raiz es: %f", r1) : p("\n c o l a p s o");
	
	    
	      	/*	r=(r/(2*a));
	      		
	      		x1=(z+r);
	      		printf("x1 es igual a: %.2f \n", x1);
	      		x2=(z-r);
	      		printf("x2 es igual a: %.2f", x2);
	      		
			  }
		    else
		    
		      {
		      	puts ("La raiz es imaginaria\a");
		      	
		      	r=(r*-1);
		      	r=sqrt(r);
	      		r=(r/(2*a));
	      		
	      		
	      		printf("x1 es igual a: %.2f + %0.f img\n", z,r);
	      		
	      		printf("x2 es igual a: %.2f - %0.f img", z,r);
	      		
		      	
			     }*/
	


	
	p("\n%d",r);
	
	
	getch ();
}



