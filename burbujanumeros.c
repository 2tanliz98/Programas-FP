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


