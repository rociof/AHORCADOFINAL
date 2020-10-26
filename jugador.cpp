#include <iostream>
#include <stdlib.h>
#include "jugador.h"

using namespace std;

// Constructor
Jugador::Jugador()
{
}

// Destructor
Jugador::~Jugador()
{
}

// void Jugador::verJugador()
// {
//     cout << "--------------------------\n";
//     cout << nombre << endl;
//     cout << secreto << endl;
//     cout << "Tamanio  " << nombre << " --> " << nombre.length() << endl;
// }

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

// Palabra adivinar
void Jugador::setPalabraAdivina(string _adivina)
{
    adivina = _adivina;
}

string Jugador::getPalabraAdivina()
{
    return adivina;
}

