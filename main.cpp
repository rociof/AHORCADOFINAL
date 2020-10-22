#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <string.h>
#include <string>


#include "jugador.h"
#include "funciones.h"

using namespace std;

int main()
{
    limpioPantalla();

    std::cout << "J U E G O  D E L  A H O R C A D O\n";
    std::cout << "=================================\n";

    string snom, snom2, secret1, secret2;
    // char snom[10] ,  snom2[10], secret1[10], secret2[10];

    cout << "Ingresar nombre del Jugador-1 : ";
    // cin.getline(snom,10,'\n');
    getline(cin, snom);
    cout << "Ingresar Palabra Secreta Jugador-1: ";
    getline(cin, secret1);

    limpioPantalla();

    fflush(stdin); //  Limpiamos el Buffer

    cout << "Ingresar nombre del Jugador-2: ";
    getline(cin, snom2);

    cout << "Ingresar Palabra Secreta Jugador N-2: ";
    getline(cin, secret2);

    int tam = snom.length();

    // Instancio jugadores 
    Jugador j1;
    Jugador j2;

    // nombre Jugador
    j1.setNombre(snom);
    j2.setNombre(snom2);

    // Palabra secreta
    secret1 = aMayusculas(secret1);
    secret2 = aMayusculas(secret2);

    // palabra secreta
    j1.setPalabra(secret1);
    j2.setPalabra(secret2);
    

    /** ---------------------------------------------------------------
     *              I N I C I O   D E L  J U E G O
     * ---------------------------------------------------------------- */
    int jugada = 1, turno = 1;
    char letra;

    // TOTAL JUGADAS MAX 8
    // vector letras ingresadas
    
    // char *miVector[10];
    string rocio;
    

    do
    {
        int k;                                  // variable para fallos
        string nombre;                          // Nombre Jugador
        string palabra, aciertos;               // Palabra Jugador Juego / Oponente

        limpioPantalla();
        if (turno == 1)
        {
            palabra = j1.getPalabra();
            cout << "PALABRA 1 " << palabra << endl;
            nombre = j1.getNombre();
            aciertos = j2.getPalabra();
            k = j1.fallos++;           
        }
        else
        {
            palabra = j2.getPalabra();
            cout << "PALABRA 2 " << palabra << endl;
            nombre = j2.getNombre();
            aciertos = j1.getPalabra();
            k = j2.fallos++;
        }      
        rocio = palabra;  

        MostrarAhorcado(k);
        
        for (int i = 0; i < palabra.length(); i++)
        {            
            rocio[i] = '-';           
        }
        
        cout << "Jugador: " << nombre << " Jugada Numero: " << jugada << " Fallos: " << k;
        cout << " Aciertos: " << aciertos << " " <<  rocio << endl; 

        //lamamos a la función y almacenamos el resultado introducido por el usuario en la variable letra
        letra = IngresarLetra();
        cout << letra << endl;

        // Verifico LETRA / Palabra
        for (int i = 0; i < palabra.length(); i++)
        {
            // char let = palabra[i];            
            if( palabra[i] == letra  ){  

                if(turno == 1){                   
                    // string pal = j1.getPalabraAdivina();
                    // pal[i] = letra;
                    rocio[i]= letra;
                    j1.setPalabraAdivina(rocio);
                    rocio = j1.getPalabraAdivina();

                } else {
                    // string pal = j2.getPalabraAdivina();
                    rocio[i]=letra;
                    j2.setPalabraAdivina(rocio);
                    rocio = j2.getPalabraAdivina();
                }      

                // pal[i]= letra;     // acierto y ubico letra en vector;

                cout << "Encontrada";
            }

        }        
       
        if(turno==1){
            turno=2;
        }else{
            turno=1;
            jugada++;
        }

    } while (jugada < 9);

    return 0;
}
