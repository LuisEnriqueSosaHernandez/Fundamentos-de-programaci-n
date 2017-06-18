//Programa ejemplo de como usar el selector switch, el ciclo while, y las funciones.

#include <iostream>
#include <stdlib.h>
#include "feedback.h"
#include "operacion.h"

using namespace std;

extern int n, i;
extern float x[30];
extern float resultado;
extern int opcion;

void menu_principal();
void menu_aritmetico();
void menu_trigonometrico();
void menu_funciones();
void ayuda();
void solicitud_aritmetica();
void solicitud();

int main(){
	system("clear");
	cout << "\n\n\t\tBIENVENIDO A SU CALCULADORA V 2.0";
	menu_principal();
	cout << "Nos vemos...\n"<<endl;
	return 0;
}
