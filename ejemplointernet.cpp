#include <iostream>

using namespace std;

void buscar_y_reemplazar (string& frase, string buscar, string rempl){
	int pos = frase.find(buscar);
		if (pos != -1){
			frase.replace(pos, buscar.size(), rempl);
		}
}
int main (){
	string chiste;
	chiste += "El mundo esta dividido en tres tipos de personas: ";
	chiste += "los que saben contar y los que no";
	buscar_y_reemplazar(chiste, "tres","dos");
	cout << chiste <<endl;
}
