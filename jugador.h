#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

class Jugador
{
private:    
    string nombre;                          // nombre Jugador
    string secreto;                         // Palabra a Adivinar
    int jugada;                             // Jugada
   
public:
    int fallos=0;                           // fallos jugador
    string adivina;                         // palabra a adivinar oponente
    string cuentaLetras = "----------";     // letras ingresadas
    
    // constructor
    Jugador(); 

    // Prop Jugador
    void setNombre(string);         
    string getNombre();             

    // Prop Palabra
    void setPalabra(string);        
    string getPalabra();            

    // Prop Palabra adivinar
    void setPalabraAdivina(string); 
    string getPalabraAdivina(); 

    // destructor  
    ~Jugador();    
};


