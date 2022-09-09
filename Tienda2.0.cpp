#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<cmath>

using namespace std;

char nombre[10];
int b = 1;
int edad;
int clasif;
int caracte;
int descrip;
int Videojuego;
int year;
int gener;
int Realizar, Regresar;
int Codigo;
int main()
{
	system("color 04");
	while (true) {




		cout << " =========== BIENVENIDO AL PARAISO GEIMER ===========" << endl;
		cout << "1.-Agregar Artiuclo" << endl;
		cout << "2.-Modificar Articulo (No disponible)" << endl;
		cout << "3.-Eliminar Articulo (No disponible)" << endl;
		cout << "4.-Lista de Articulos Vigentes (No disponible)" << endl;
		cout << "5.-Limpiar pantalla" << endl;
		cout << "6.-Salir" << endl;
		cout << " ====================================================" << endl;
		cin >> Realizar;

		switch (Realizar) {


		case 1:

			system("color 03");

			cout << "\n--Numero de articulo:-- " << endl;
			cin >> Codigo;
			cout << "Escriba año del juego" << endl;
			cin >> year;
			cout << "Escriba la clasificacion del juego" << endl;
			cin >> clasif;
			system("color 02");
			cout << "Escriba alguna caracteristica del juego" << endl;
			cin >> caracte;
			cout << "Escriba alguna descripcion del juego" << endl;
			cin >> descrip;
			cout << "Escriba algun genero del juego" << endl;
			cin >> gener;
			cout << "\n --Seleccione el Super Videojuego deseado:--" << endl;
			cout << "[1].-La Leyenda de Melda y el ukulele del tiempo COSTO: 101 Pesos MXN.\n[2].-Puchamon. COSTO: 120 Pesos MXN" << endl;
			cout << "[3].-Los super hermanos Mauricio. COSTO: 110 Pesos MXN \n[4].-Sanic el puerco velocista. COSTO: 90 Pesos MXN" << endl;
			cout << "[5].-Master Chef kitchen evolved COSTO:101 Pesos MXN. \n[6]Street heroes. " << endl;
			cout << "-----------------------------------------------" << endl;
			cout << "Escriba el juego deseado" << endl;
			cin >> Videojuego;
			system("color 09");
			cout << "Juego solicitado y confirmado, Muchas gracias por comprar en paraiso PARAISO GEIMER " << endl;
			break;




		case 5: {
			system("cls");
			system("color 05");

			break;

		}
		case 6: {
			cout << "Vas a salir." << endl;
			b = b + 1;
			system("pause>null");
			exit(-1);

			break;
		}

		default:
		{
			cout << "La opcion seleccionada esta equivocada o no esta implementada por favor espere a una nueva actualizacion..." << endl;
			system("color 01");
			break;
		}
		while (Regresar == 1) {
			return 0;
		}

		}
	}
}