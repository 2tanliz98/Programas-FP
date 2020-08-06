#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf 
int op1, a, n1,n2,n3,b, salario = 40000;
int  r=240, v=120, i;
float calif, aumento;
int k[8][8],x,y;
int suma;
float prom;
main ()
{
	p("\t\t MENU");
	p("\n 1. Calcular aumento de sueldo");
	p("\n 2. Calcular corriente");
	p("\n 3. Calificaciones");
	p("\n4. Comprobar suma");
	p("\n5. Partido de Basquetbol");
	p("\nElige una opci%cn:  ",162);
	s("%d", &op1);
	
	switch (op1){
		case 1: 
			
			p("\nUsted ha elegido la opci%cn 1: Calcular el aumento de sueldo",162);
			p("\nCu%cntos a%cos ha trabajado en la empresa?", 160,164);
			s("%d",&a);	
			if (0<a<3) {
			aumento = (salario*0.03)+salario;
			p("\n Su aumento es de: %f",aumento);
			}
			else if (4<a<5) {
			aumento = (salario*0.05)+salario;
			p("\n Su aumento es de: %f",aumento);
			}
			else if (6<a<10) {
			
			aumento = (salario*0.07)+salario;
			p("\n Su aumento es de: %f",aumento);
			}
			else if (a<10) {
			aumento = (salario*0.10)+salario;
			p("\n Su aumento es de: %f",aumento);
			}
			break;
			
		case 2: 
			p("\nUsted ha elegido la opci%cn 2: Calcular corriente",162);
			float i = (float) v/r;
			p("\n El voltaje que fluye en la bombilla con una resistencia de 240 (ohmios), cuando se conect a un voltaje de 120 [V], es: %.2f [A]", i);
			break;
			
		case 3: 
			p("\nUsted ha elegido la opci%cn 3: Calificaciones",162);
			p("\n Cu%cl fue su calificaci%cn obtenida? ",160,162);
			s("%f",&calif);
			if (0<=calif && calif<=4.99)
			p("\n No aprobado");
			if (5<=calif && calif<=7)
			p("\n Aprobado");
			if (7<=calif && calif<=8.99)
			p("\n Notable");
			if (9<=calif && calif<=9.99)
			p("\n Sobresaliente");
			if (calif=10)
			p("\n EXELENTE");
			if (calif < 0 || calif>10)
			p("\n Calificaci%cn inv%clida",162,160);
			break;
		
		case 4: 
			p("\n Ingrese el primer numero: ");
			s("%d",&n1);
			p("\n Ingrese el segundo numero: ");
			s("%d",&n2);
			p("\n Ingrese el tercer numero: ");
			s("%d",&n3);
			b=(n1+n2);
			if (b==n3)
			p("\n La suma de %d + %d es igual al valor introducido %d ",n1,n2,n3);
			else p("\n La suma de %d + %d es diferente al valor introducido %d",n1,n2,n3);
			break;
		
		case 5: 
			p("\n Usted ha elegido la opci%cn 5: Partido de Basquetbol",162);
			
			for (x=1;x<=4;x++){
				p("\n Para partido %d",x);
				for (y=1;y<=5;y++){
				p("\n Introduce puntos del jugador %d: ",y);
				s("%d",&k[x][y]);
				//	suma += k[x][y];
				}			
			}
		
			for (y=1;y<=5;y++){
				for (x=1;x<=4;x++){
				suma = (suma +k[x][y]) ;
				
		}
			prom = suma/4;
			p("\n El promedio del jugador %d fue %.2f",y,prom);
			suma =0;
		}
		break;
		default: 
		p("\n Opci%cn inv%clida",162,160);
		break;											
	}
	getch ();
		
}

