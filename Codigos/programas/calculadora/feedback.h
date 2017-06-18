using namespace std;

int n, i;
float x[30];
float resultado=0;
int opcion;

void suma(),resta();
void mult();
void div();
void seno();
void coseno();
void tangente();
void arcseno();
void arccoseno();
void arctangente();
void grado_1();
void grado_2();
void grado_3();

void ayuda(){
	cout << "Perra :v !" << endl;
}

void menu_aritmetico(){
		system("clear");
		cout << "\n\t\t--Calculadora Aritmética--"<< endl;
		cout << "\tMenú de opciones: \n\n1. Suma\n2. Resta\n3. Multiplicación\n4. División";
		cout << "\n\nIntroduzca su opción (1-4): ";
		cin >> opcion;
		switch (opcion){
			case 1:
				suma();
				break;
			case 2:
				resta();
				break;
			case 3:
				mult();
				break;
			case 4:
				div();
				break;
			default:
				cout<< "\n\nError: Opción no válida" << endl;
		}
}

void menu_trigonometrico(){
		system("clear");
		cout << "\n\t\t--Calculadora Trigonométrica--"<< endl;
		cout << "\tMenú de opciones: \n\n1. Seno\n2. Coseno\n3. Tangente\n4. Arco Seno\n5. Arco Coseno\n6. Arco Tangente";
		cout << "\n\nIntroduzca su opción (1-6): ";
		cin >> opcion;
		switch (opcion){
			case 1:
				seno();
				break;
			case 2:
				coseno();
				break;
			case 3:
				tangente();
				break;
			case 4:
				arcseno();
				break;
			case 5:
				arccoseno();
				break;
			case 6:
				arctangente();
				break;
			default:
				cout<< "\n\nError: Opción no válida" << endl;
		}
}

void menu_funciones(){
		system("clear");
		cout << "\n\t\t--Calculadora de Funciones--"<< endl;
		cout << "\tAquí podrá realizar la evaluación de una función polinomial en un número 'x'" << endl;
		cout << "Menú de opciones: \n\n1. Función tipo ax + b\n2. Función tipo ax² + bx + c\n3. Función ax³ + bx² + cx + d";
		cout << "\n\nIntroduzca su opción (1-3): ";
		cin >> opcion;
		switch (opcion){
			case 1:
				grado_1();
				break;
			case 2:
				grado_2();
				break;
			case 3:
				grado_3();
				break;
			default:
				cout<< "\n\nError: Opción no válida" << endl;
		}
}

void menu_principal(){
	do{
		cout << "\n\n\tA continuación le presentamos el menú: \n\n1. Calculadora Aritmética\n2. Calculadora Trigonométrica\n3. Calculadora de funciones\n4. Ayuda\n5. Salir";
		cout << "\n\nIntroduzca su opción (1-5): ";
		cin >> opcion;
		switch (opcion){
			case 1:
				menu_aritmetico();
				cout << "\n\n\n\tDesea realizar otra operación? Si (1) / No (2): ";cin >> opcion;
				break;
			case 2:
				menu_trigonometrico();
				cout << "\n\n\n\tDesea realizar otra operación? Si (1) / No (2): ";cin >> opcion;
				break;
			case 3:
				menu_funciones();
				cout << "\n\n\n\tDesea realizar otra operación? Si (1) / No (2): ";cin >> opcion;
				break;
			case 4:
				ayuda();
				cout << "\n\n\n\tDesea realizar otra operación? Si (1) / No (2): ";cin >> opcion;
				break;
			case 5:
				break;
			default:
				cout<< "\n\nError: Opción no válida" << endl;
				cout << "\n\n\n\tDesea realizar otra operación? Si (1) / No (2): ";cin >> opcion;
		}
		system("clear");
	}while (opcion == 1);
}

void solicitud_aritmetica(){
	if (opcion == 1 || opcion == 3){
		cout << "\n¿Cuántos números desea usar para su operación?: ";
		cin >> n;
		for (i=0;i<n;i++){
			cout << "Introduzca numero "<< i+1 << ": ";
			cin >> x[i];
		}
	}
	else{
		n=2;
		cout << "\n\n\tIntroduzca numero 1: ";
		cin >> x[0];
		cout << "\tIntroduzca numero 2: ";
		cin >> x[1];
	}
}

void solicitud_trigonometrica(){
	cout << "Introduzca número a evaluar (en RADIANES): ";
	cin >> x[0];
}

void solicitud_funciones(){
	switch (opcion){
		case 1:
			cout << "\nIntroduzca el valor de x: "; cin >> x[0];
			cout << "Introduzca el valor de a: "; cin >> x[1];
			cout << "Introduzca el valor de b: "; cin >> x[2];
			break;
		case 2:
			cout << "\nIntroduzca el valor de x: "; cin >> x[0];
			cout << "Introduzca el valor de a: "; cin >> x[1];
			cout << "Introduzca el valor de b: "; cin >> x[2];
			cout << "Introduzca el valor de c: "; cin >> x[3];
			break;
		case 3:
			cout << "\nIntroduzca el valor de x: "; cin >> x[0];
			cout << "Introduzca el valor de a: "; cin >> x[1];
			cout << "Introduzca el valor de b: "; cin >> x[2];
			cout << "Introduzca el valor de c: "; cin >> x[3];
			cout << "Introduzca el valor de d: "; cin >> x[4];
			break;
		default:
			cout<< "\n\nError: Opción no válida" << endl;
	}
}


