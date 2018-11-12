#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf
int suma (int n1, int n2);
int resta (int n1, int n2);
int mult(int n1, int n2);
int div(int n1, int n2);
int op,z,r,m, d;
int main ()
{
		int n1,n2;
	p("1. Suma\n");
	p("2. Resta\n");
	p("3. multiplicaci%cn\n",162);
	p("4. Divisi%cn\n",162);
	p("Elije una opci%cn\n",162);	
	s("%d",&op);
	
	switch (op)
	{
		case 1: 
			suma (n1,n2);
			p("\n El resultado de la suma es: %d",z);
			break;
		case 2: 
			p("\n El resultado de la resta es: %d",r);
			break;
		case 3: 
			p("\n El resultado de la multiplicacion es: %d",m);
			break;
		case 4: 
			s("%d", &n2);
			div (n1,n2);
			p("\n El resultado de la division es: %d",d);
			break;
		default: p("\n opcion invalida");
		break;
	}
	getch ();
}
int suma (int n1, int n2){
			p("\n Ha elegido 1.Suma ");
			p("\n Intoduce el primer numero: ");
			s("%d", &n1);
			p("\n Intoduce el segundo numero: ");
			s("%d", &n2);
	z = (n1+n2);
	return (z);
}
int resta (int n1, int n2){
				p("\n Ha elegido 2.Resta ");
			p("\n Intoduce el primer numero: ");
			s("%d", &n1);
			p("\n Intoduce el segundo numero: ");
			s("%d", &n2);
			resta (n1,n2);
	r = (n1-n2);
	return (r);
}
int mult(int n1, int n2){
				p("\n Ha elegido 3.Multiplicacion ");
			p("\n Intoduce el primer numero: ");
			s("%d", &n1);
			p("\n Intoduce el segundo numero: ");
			s("%d", &n2);
			mult (n1,n2);
	m = (n1*n2);
	return (m);
}
int div(int n1, int n2){
				p("\n Ha elegido 4.Division");
			p("\n Intoduce el primer numero: ");
			s("%d", &n1);
			p("\n Intoduce el segundo numero: ");
	d =  (n1/n2);
	return (d);
}

