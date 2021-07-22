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
			system("cls");
			cout << "1. Alta de usuario" << endl;
			cout << "2. Alta de asignatura" << endl;
			cout << "3. Asignar docente a asignatura" << endl;
			cout << "4. Volver" << endl;
			break;
		case 2:
			system("cls");
			cout << "1. Inicio de clase" << endl;
			cout << "2. Finalizar clase" << endl;
			cout << "3. Volver" << endl;
			break;
		case 3:
			system("cls");
			cout << "1. Inscripcion a asingatura" << endl;
			cout << "2. Volver" << endl;
			break;
		case 4:
			
			break;
		}
	} while (opcion != 4);

	return 0;
}
