#include <iostream>
using namespace std;


int opcion = 0;
int main()
{
	do {
		system("cls");
		cout << "\t\tBienvenido, ingrese una opción:" << endl;
		cout << endl;
		cout << "1. Administrador" << endl;
		cout << "2. Docente" << endl; 
		cout << "3. Estudiante" << endl;
		cout << "4. Salir" << endl;

		cout << "Opción:" << endl;
		cin >> opcion;

		switch (opcion) {

		case 1:
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		}
	} while (opcion != 4);

	return 0;
}
