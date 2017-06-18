#include <math.h>

using namespace std;

void suma(){
	solicitud_aritmetica();
	resultado = 0;
	for (i=0;i<=n;i++){
		resultado = resultado + x[i];
	}
	cout << "\n\nEl resultado de la suma es "<< resultado << endl;
}

void resta(){
	solicitud_aritmetica();
	resultado = x[0] - x[1];
	cout << "\n\nEl resultado de la resta es "<< resultado << endl;
}

void mult(){
	solicitud_aritmetica();
	resultado = 1;
	for (i=0;i<n;i++){
		resultado = resultado * x[i];
	}
	cout << "\n\nEl resultado de la multiplicación es "<< resultado << endl;
}

void div(){
	solicitud_aritmetica();
	resultado = x[0] / x[1];
	 cout << "\n\nEl resultado de la división es "<< resultado << endl;
}

void seno(){
	solicitud_trigonometrica();
	resultado = sin(x[0]);
	cout << "\n\nEl seno de " << x[0] << " es: " << resultado << endl;
}

void coseno(){
	solicitud_trigonometrica();
	resultado = cos(x[0]);
	cout << "\n\nEl coseno de " << x[0] << " es: " << resultado << endl;
}

void tangente(){
	solicitud_trigonometrica();
	resultado = tan(x[0]);
	cout << "\n\nLa tangente de " << x[0] << " es: " << resultado << endl;
}

void arcseno(){
	solicitud_trigonometrica();
	resultado = asin(x[0]);
	cout << "\n\nEl arco seno de " << x[0] << " es: " << resultado << endl;
}

void arccoseno(){
	solicitud_trigonometrica();
	resultado = acos(x[0]);
	cout << "\n\nEl arco coseno de " << x[0] << " es: " << resultado << endl;
}

void arctangente(){
	solicitud_trigonometrica();
	resultado = atan(x[0]);
	cout << "\n\nEl arco tangente de " << x[0] << " es: " << resultado << endl;
}

void grado_1(){
	solicitud_funciones();
	resultado = x[1] * x[0] + x[2];
	cout << "\n\nEl resultado de tu evaluación es: " << resultado << endl;
}

void grado_2(){
	solicitud_funciones();
	resultado = x[1]*(x[0]*x[0])+x[2]*x[0]+x[3];
	cout << "\n\nEl resultado de tu evaluación es: " << resultado << endl;
}

void grado_3(){
	solicitud_funciones();
	resultado = x[1]*(x[0]*x[0]*x[0])+x[2]*(x[0]*x[0])+x[3]*x[0]+x[4];
	cout << "\n\nEl resultado de tu evaluación es: " << resultado << endl;
}
