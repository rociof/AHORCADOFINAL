#include <iostream>
#include <stdlib.h>
#include "jugador.h"

using namespace std;

// Constructor
Jugador::Jugador()
{
    // nombre = _nombre;
    // cout << "Constructor "<< nombre << endl;
}

// Destructor
Jugador::~Jugador()
{
}

void Jugador::verJugador()
{
    cout << "--------------------------\n";
    cout << nombre.substr(0, 5) << endl;
    cout << secreto << endl;
}

// encapsulamiento
// Nombre del jugador
void Jugador::setNombre(string _nombre)
{
    nombre = _nombre;
}

string Jugador::getNombre()
{
    return nombre;
}

// Palabra secreta
void Jugador::setPalabra(string _secreto)
{
    secreto = _secreto;
}

string Jugador::getPalabra()
{
    return secreto;
}

void Jugador::decirLetra(char letra)
{
    for (int i = 0; i < 20; i++)
    {

        if (v1[i] == letra)
        {
            cout << " La letra ya ha sido ingresada" << endl;
        }
        else if (v1[i] != ' ')
        {
            v1[i] = letra;
        }
    }
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i];
    }
}
