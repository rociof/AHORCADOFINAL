#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <string>

#include "jugador.h"
#include "funciones.h"

using namespace std;

int main()
{
    limpioPantalla();

    std::cout << "J U E G O  D E L  A H O R C A D O\n";
    std::cout << "=================================\n";

    // string snom, snom2 ,secret1, secret2;
    char snom[20] ,  snom2[20], secret1[10], secret2[10];    

    cout << " Ingresar nombre del Jugador-1 : ";    
    // cin.getline(snom, 20, '\n');
    cin.getline(snom,20,'\n');
    cout << " Ingresar Palabra Secreta Jugador-1: ";
    cin.getline(secret1,10, '\n');

    limpioPantalla();

    fflush(stdin); //  Limpiamos el Buffer

    cout << " Ingresar nombre del Jugador-2: ";   
   cin.getline(snom2,20,'\n');
    cout << " Ingresar Palabra Secreta Jugador N-2: ";
    cin.getline(secret2,10, '\n');

    // Instancio jugadores
    Jugador j1;    
    Jugador j2;   

    // nombre Jugador
    j1.setNombre(snom);
    j2.setNombre(snom2);

    // Palabra secreta
    secret1 = aMayusculas( secret1 );    
    secret2 = aMayusculas(secret2);
   
    j1.setPalabra(secret1);
    j2.setPalabra(secret2);
  
       
    // prueba 
    j1.verJugador();
    MostrarAhorcado(5);
    j2.verJugador();
    MostrarAhorcado(8);
    
    /** ---------------------------------------------------------------
     *              I N I C I O   D E L  J U E G O
     * ---------------------------------------------------------------- */
    int jugada =1;  
    char letra;

    // TOTAL JUGADAS MAX 8
    do{        
        cout << "Ingrese una letra: " << endl;
        letra = IngresarLetra();//lamamos a la función y almacenamos el resultado introducido por el usuario en la variable letra
        cout << letra << endl;
        j1.decirLetra(letra);







        jugada++;
    }while(jugada<9);

    
    return 0;
}


// ===============================================================================================================================
// TOTAL JUGADAS MAX 8
    // do{        
        /** Movimiento Jugador
         * Tipeo Letra 

          Meto letra en array[v2] ->letras ingresadas
         comparto letras con Vector1 (secreto) 
               si hay coincidence
                   guardo en el V3 ( si bo fue ingresada)
          Verifico V3(letrasIngresas) -> V1(Secreto) == ?Finalizo Juego Adivinada -- >>> BREAK;
         
          if Jugador == 1
               cambio juagador a 2
         else
           cammbio jugador 1
         
          if ( jugador == 1){
            jugador = 2
            }{
                jugador = 1
            }

            Jugador = (Jugador == 1) ? 2 : 1; //función ternaria

         * 
         * 
         *  incremento jugada
         
        */

        // cout << "Veo jugador 3" << endl;        
         
        //  cout << turno << endl;
        // IngresarLetra();


    // }while(jugada<8);

    // ===============================================================================================================================
