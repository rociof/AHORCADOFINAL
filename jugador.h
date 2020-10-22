#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Jugador
{
private:    
    string nombre,secreto,adivina;
    int jugada;

    char v1[20];//array que almacena los caracteres introducidos por usuario
    
   
public:
    int fallos=0;
    Jugador(); // constructor
    void verJugador();
    void setNombre(string);         // setter Nombre Jugador
    string getNombre();             // get Nombre Jugador
    void setPalabra(string);        // setter Palabra Secreta
    string getPalabra();            // get  Palabra Secreta

    void setPalabraAdivina(string);        // setter Palabra Secreta Aciertos
    string getPalabraAdivina();            // get  Palabra Secreta Aciertos

    void decirLetra(char); 
    int getFallos(int&);
    // char l[];    
    ~Jugador();
};


