#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Jugador
{
private:    
    string nombre,secreto;
    int jugada;
    char v1[20];//array que almacena los caracteres introducidos por usuario
    
   
public:
    Jugador(); // constructor
    void verJugador();
    void setNombre(string);         // setter
    string getNombre();             // getter
    void setPalabra(string);        // setter 
    string getPalabra();            // geter
    void decirLetra(char); 
    // char l[];
    
    ~Jugador();
};


