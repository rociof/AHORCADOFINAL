/** -----------------------------------
 *  J U E G O  D E L  A H O R C A D O
 * ----------------------------------- 
 * Realizado por Rocio Fernández Cantó, Manuel Seselle y Hugo Rodriguez;
 * Juego para dos jugadores con limite de tirada de 20 rondas
 */

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

    // ingresar palabra maximo 10 caracteres
    do
    {
        cout << "Ingresar Palabra Secreta Jugador-1: ";
        getline(cin, secret1);
    } while (secret1.length() > 10);

    limpioPantalla();

    // Limpiamos el Buffer
    fflush(stdin);

    cout << "Ingresar nombre del Jugador-2: ";
    getline(cin, snom2);

    // ingresar palabra maximo 10 caracteres
    do
    {
        cout << "Ingresar Palabra Secreta Jugador N-2: ";
        getline(cin, secret2);
    } while (secret2.length() > 10);

    // Instancio jugadores
    Jugador j1;
    Jugador j2;

    // nombre Jugador
    j1.setNombre(snom);
    j2.setNombre(snom2);

    // Palabra secreta a Mayusculas
    secret1 = aMayusculas(secret1);
    secret2 = aMayusculas(secret2);

    // palabra secreta en clase
    j1.setPalabra(secret1);
    j2.setPalabra(secret2);

    j1.setPalabraAdivina(secret2);
    j2.setPalabraAdivina(secret1);

    // vector 
    for (int i = 0; i < j1.getPalabraAdivina().length(); i++)
    {
        j1.adivina[i] = '-';
    }

    for (int i = 0; i < j2.getPalabraAdivina().length(); i++)
    {
        j2.adivina[i] = '-';
    }

    /** ---------------------------------------------------------------
     *              I N I C I O   D E L  J U E G O
     * ---------------------------------------------------------------- */
    int jugada = 1, turno = 1;
    char letra;

    // TOTAL JUGADAS MAX 8
    // vector letras ingresadas

    do
    {
        entrada:
        int k;                  // variable para fallos
        string nombre, nombre2; 
        string palabra;
        string adivina;         
        string aciertos;
        string ingresos[20];  // letras ingresadas
        
       

        limpioPantalla();
        cout << "Ronda numero: " << jugada << endl;
        if (turno == 1)
        {
            pantallaJugador(j1,j2);
            palabra = j2.getPalabra(); 
            adivina = j2.getPalabraAdivina();
            aciertos = j2.getPalabra();                     
            MostrarAhorcado(j1.fallos);
           
        }
        else
        {
            pantallaJugador(j2,j1);
            palabra = j1.getPalabra();
            adivina = j1.getPalabraAdivina();
            aciertos = j1.getPalabra();            
            MostrarAhorcado(j2.fallos);
        }

        // ingresar letra
        letra = IngresarLetra();

        // buscar letra ingresada
        string veo;
        j1.decirLetra(letra, veo);
        

        cout << ingresos;

        // Verifico LETRA / Palabra
        bool fallo = false;
        for (int i = 0; i < palabra.length(); i++)
        {            
            if (palabra[i] == letra)
            {
                fallo = true;
                if (turno == 1)
                {
                    j1.adivina[i] = letra; // j2
                    adivina = j1.adivina;
                }
                else
                {
                    j2.adivina[i] = letra;
                    adivina = j2.adivina;
                }
            }
        }
        cout << "PALABRA " << adivina << endl;
        cin.get();

        if (aciertos == adivina)
        {
            cout << "Ganaste !!!!!!!!" << endl;
            break;
        }

        if (turno == 1)
        {
            turno = 2;
            if (fallo == false)
                j1.fallos++;
            if (j1.fallos == 8)
            {
                break;
            }
        }
        else
        {
            if (fallo == false)
                j2.fallos++;
            turno = 1;
            jugada++;
            if (j2.fallos == 8)
            {
                break;
            }
        }       

    } while (jugada < 20);      

    return 0;
}
