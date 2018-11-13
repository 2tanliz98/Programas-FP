#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int arr [4][4], x,y,acu;

int main ()
{
	srand (time(NULL)); 
	for (x = 0; x < 4; x++){ //filas
		for (y = 0; y < 4; y++){ //columnas
			arr [x][y]= 1/*rango inferiror*/+rand()%9 /*rango superior*/;
		}
	}
	for (x = 0; x < 4; x++){
		acu=0;
		for (y = 0; y < 4; y++){
			acu=acu+arr[x][y];
			arr[x][4] = acu;
		}
	}
	for (x = 0; x < 4; x++){ 
		printf("\n");
	for (y = 0; y < 4; y++){ 
	printf (" %d ", arr[x][y]);
}
}
getch ();
return 0;
}
