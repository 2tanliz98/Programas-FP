/* burbuja numeros*/
#include <stdio.h>
#include <conio.h>

void main (void){
    int Datos [100];
    int cont, aux, n, contbloque;
    
    printf ("Cuantos elementos tiene ? ");
    scanf ("%d", &n);
    cont = 0;
    
    do{
            printf ("\n Dame el dato %d", cont);
            scanf ("%d", &Datos[cont]);
            cont ++;
    } while (cont < n);
    printf ("\n");
    cont = 0;
    do{
            printf(" %d", Datos[cont]);
            cont++;
    } while (cont < n );
    /*Metodo burbuja*/
    cont = 0;
    do{
            if (Datos [cont]> Datos [cont + 1]){
                aux = Datos [cont + 1];
                Datos [cont ]= aux;
            }
            cont++;
    }while (cont < n - 1);
    printf ("\n El arreglo queda ordenado \n");
    cont = 0;
    do{
                printf ("%d", Datos [cont]);
                cont++;
    } while (cont < n);
}

/*burbuja letras
#include <stdio.h>
#include <conio.h>

void main (void){
    char Datos [100];
    char cont, aux, contbloque;
    float n;

    printf("Cu%cntos elementos tiene?", 160);
    printf("\n");
    scanf ("%f", &n);
    
    cont = 0;
    do { 
        printf ("\n Dame el dato %f", cont + 1);
        printf("\n");
        scanf ("%f", &Datos [cont]);
        cont ++;
        
    } while (cont < n );
    
    printf ("\n");
    cont = 0;
    do{
        printf (" %f", Datos [cont]);
        cont ++;
    }while (cont < n);
    
    /* Metodo de la burbuja*/
/*do{    
    
    cont = 0;
    do{
    
        if (Datos [cont] > Datos [cont + 1]) {
            aux = Datos [cont + 1];
            Datos [cont + 1] = Datos [cont];
            Datos [cont] = aux;
        }
        cont ++;
    }while (cont < n-1);
    contbloque++;
}while (contbloque < n-1);

        printf (" \n El arreglo ordenado queda \n");
        cont = 0;
        do {
            printf (" %c ", Datos [cont]);
            cont ++;
        }while (cont < n);
}

/*cesar*/
/*#include <conio.h>
#include <stdio.h>
#include <string.h>

void main (void)
{
    int cont, inicio;
    char Alfa [27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',165,'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char Cesar [27];
    char cadena[101];
    int contb, cont1;
    char cifrada[101];
    
    
        for( cont = 0; cont<27; cont++)
            printf(" %c ", Alfa[cont]);
            
        printf(" \n Introduzca un n%cmero entre 1 y 27 \n ", 163 ); 
        scanf("%d", &inicio);
        
        for ( cont =0; cont<27; cont++)
        
        if ( cont + inicio>=27)
            Cesar[cont]=Alfa[cont+inicio-27];
        else
            Cesar[cont]=Alfa[cont+inicio];
        
        printf("\n");
        for (cont=0; cont<27; cont++)
        printf(" %c ", Cesar[cont]);

printf(" \n Dame un mensaje a cifrar, por favor ");
fflush(stdin);
gets (cadena);
          
        printf("\n");
        
        for (cont = 0; cont < strlen (cadena); cont++){
            printf(" %c ", cadena[cont]);  
            cont1 = cont;
            contb = -1;
            do{
                contb ++;
                if (cadena[cont1] == Alfa[contb])
                    cifrada[cont1]= Cesar[contb];    
                }while (cadena[cont] != Alfa[contb] && contb <27);
                printf (" \n %c", cifrada [cont1]);
            printf("\n");
    }  ** burbuja numeros*/
/*#include <stdio.h>
#include <conio.h>

void main (void){
    int Datos [100];
    int cont, aux, n, contbloque;
    
    printf ("Cuantos elementos tiene ? ");
    scanf ("%d", &n);
    cont = 0;
    
    do{
            printf ("\n Dame el dato %d", cont);
            scanf ("%d", &Datos[cont]);
            cont ++;
    } while (cont < n);
    printf ("\n");
    cont = 0;
    do{
            printf(" %d", Datos[cont]);
            cont++;
    } while (cont < n );
    /*Metodo burbuja*/
 /*   cont = 0;
    do{
            if (Datos [cont]> Datos [cont + 1]){
                aux = Datos [cont + 1];
                Datos [cont ]= aux;
            }
            cont++;
    }while (cont < n - 1);
    printf ("\n El arreglo queda ordenado \n");
    cont = 0;
    do{
                printf ("%d", Datos [cont]);
                cont++;
    } while (cont < n);
}

/*burbuja letras*/
/*#include <stdio.h>
#include <conio.h>

void main (void){
    char Datos [100];
    char cont, aux, contbloque;
    float n;

    printf("Cu%cntos elementos tiene?", 160);
    printf("\n");
    scanf ("%f", &n);
    
    cont = 0;
    do { 
        printf ("\n Dame el dato %f", cont + 1);
        printf("\n");
        scanf ("%f", &Datos [cont]);
        cont ++;
        
    } while (cont < n );
    
    printf ("\n");
    cont = 0;
    do{
        printf (" %f", Datos [cont]);
        cont ++;
    }while (cont < n);
    
    /* Metodo de la burbuja*/
/*do{    
    
    cont = 0;
    do{
    
        if (Datos [cont] > Datos [cont + 1]) {
            aux = Datos [cont + 1];
            Datos [cont + 1] = Datos [cont];
            Datos [cont] = aux;
        }
        cont ++;
    }while (cont < n-1);
    contbloque++;
}while (contbloque < n-1);

        printf (" \n El arreglo ordenado queda \n");
        cont = 0;
        do {
            printf (" %c ", Datos [cont]);
            cont ++;
        }while (cont < n);
}

/*cesar*/
/*#include <conio.h>
#include <stdio.h>
#include <string.h>

void main (void)
{
    int cont, inicio;
    char Alfa [27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',165,'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char Cesar [27];
    char cadena[101];
    int contb, cont1;
    char cifrada[101];
    
    
        for( cont = 0; cont<27; cont++)
            printf(" %c ", Alfa[cont]);
            
        printf(" \n Introduzca un n%cmero entre 1 y 27 \n ", 163 ); 
        scanf("%d", &inicio);
        
        for ( cont =0; cont<27; cont++)
        
        if ( cont + inicio>=27)
            Cesar[cont]=Alfa[cont+inicio-27];
        else
            Cesar[cont]=Alfa[cont+inicio];
        
        printf("\n");
        for (cont=0; cont<27; cont++)
        printf(" %c ", Cesar[cont]);

printf(" \n Dame un mensaje a cifrar, por favor ");
fflush(stdin);
gets (cadena);
          
        printf("\n");
        
        for (cont = 0; cont < strlen (cadena); cont++){
            printf(" %c ", cadena[cont]);  
            cont1 = cont;
            contb = -1;
            do{
                contb ++;
                if (cadena[cont1] == Alfa[contb])
                    cifrada[cont1]= Cesar[contb];    
                }while (cadena[cont] != Alfa[contb] && contb <27);
                printf (" \n %c", cifrada [cont1]);
            printf("\n");
    }  */


