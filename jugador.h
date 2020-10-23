#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Jugador
{
private:    
    string nombre;
    string secreto;   
    int jugada;
   
public:
    int fallos=0;
    string adivina;
    // constructor
    Jugador(); 

    void verJugador();

    void setNombre(string);         // setter Nombre Jugador
    string getNombre();             // get Nombre Jugador

    void setPalabra(string);        // setter Palabra Secreta
    string getPalabra();            // get  Palabra Secreta

    void setPalabraAdivina(string);        // setter Palabra Secreta Aciertos
    string getPalabraAdivina();            // get  Palabra Secreta Aciertos

    void decirLetra(char, string); 
    // int getFallos(int&);

    // destructor  
    ~Jugador();
    
};


