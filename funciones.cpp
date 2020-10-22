#include <iostream>
#include <cctype>
#include <stdlib.h>
#include "funciones.h"
#include "string"

using namespace std;

//Convierte a mayúsculas el string
string aMayusculas(string cade)
{
	int largo = cade.length();

	for (int i = 0; i < largo; ++i)
	{
		cade[i] = toupper(cade[i]);
	}

	return cade;
}

void limpioPantalla()
{

#ifdef _WIN32
	system("cls");
	std::cout << "Windows" << std::endl;
#elif __linux__
	system("clear");
	std::cout << "Linux" << std::endl;
	//    system("read -r");
#endif
}

void MostrarAhorcado(int fallos)
{
	cout << " ";
	cout << "\t\tL A  H O R C A ! ! !" << endl;
	cout << "\n";
	switch (fallos)
	{
	case 0:
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		break;
	case 1:
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t" << endl;
		cout << "\t\t_________" << endl;
		break;
	case 2:
		cout << "\t\t|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t_________" << endl;
		break;
	case 3:
		cout << "\t\t------" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t_________" << endl;
		break;
	case 4:
		cout << "\t\t------" << endl;
		cout << "\t\t|   |" << endl;
		cout << "\t\t|   o" << endl;
		cout << "\t\t|  " << endl;
		cout << "\t\t|  " << endl;
		cout << "\t\t_________" << endl;
		break;
	case 5:
		cout << "\t\t------" << endl;
		cout << "\t\t|   |" << endl;
		cout << "\t\t|   o" << endl;
		cout << "\t\t|  /|" << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t_________" << endl;
		break;
	case 6:
		cout << "\t\t------" << endl;
		cout << "\t\t|   |" << endl;
		cout << "\t\t|   o" << endl;
		cout << "\t\t|  /|\\ " << endl;
		cout << "\t\t|" << endl;
		cout << "\t\t_________" << endl;
		break;
	case 7:
		cout << "\t\t------" << endl;
		cout << "\t\t|   |" << endl;
		cout << "\t\t|   o" << endl;
		cout << "\t\t|  /|\\ " << endl;
		cout << "\t\t|  / " << endl;
		cout << "\t\t_________" << endl;
		break;
	case 8:
		cout << "\t\t------" << endl;
		cout << "\t\t|   |" << endl;
		cout << "\t\t|   o" << endl;
		cout << "\t\t|  /|\\" << endl;
		cout << "\t\t|  / \\" << endl;
		cout << "\t\t_________" << endl;
	}
	cout << "" << endl;
}

//Comprobar si la letra introducida es válida
char IngresarLetra()
{
	char letra;
	// int valor;
	do
	{
		cout << "Ingresar letra : ";
		cin >> letra;
		// valor = letra;	

		if (letra >= 'a' && letra <='z'){
			//cout << "Valor ASCII de la Letra: " << (valor-32);
			letra -= 32;
		}

		if(letra >= 'A' && letra <='Z'){
			break;
		}

	} while (true);

	return letra;
}
