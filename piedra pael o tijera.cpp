#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void juego(int &a);
void resultado(int c, int a, int &victoriasJugador1, int &victoriasJugador2);

int main() {
    srand(static_cast<unsigned int>(time(0))); // Inicializa el generador de números aleatorios

    int c, a;
    int victoriasJugador1 = 0, victoriasJugador2 = 0;

    cout << "Bienvenido al juego de piedra, papel o tijera\n";
    cout << "El juego terminará cuando uno de los dos jugadores haya ganado 3 veces\n";

    while (victoriasJugador1 < 3 && victoriasJugador2 < 3) {
        cout << "\nMenu:\n";
        cout << "Para tijera presione: 1\n";
        cout << "Para papel presione: 2\n";
        cout << "Para piedra presione: 3\n";
        cout << "Su opción es: ";
        cin >> c;

        while (c < 1 || c > 3) {
            cout << "Opción inválida. Elija nuevamente (1 - tijera, 2 - papel, 3 - piedra): ";
            cin >> c;
        }

        juego(a);

        cout << "Es ";
        if (c == 1) cout << "tijera";
        else if (c == 2) cout << "papel";
        else if (c == 3) cout << "piedra";

        cout << " vs ";
        if (a == 1) cout << "tijera";
        else if (a == 2) cout << "papel";
        else if (a == 3) cout << "piedra";

        cout << "\n";

        resultado(c, a, victoriasJugador1, victoriasJugador2);

        cout << "Puntuación actual:\n";
        cout << "Jugador 1: " << victoriasJugador1 << " victorias\n";
        cout << "Jugador 2: " << victoriasJugador2 << " victorias\n";
    }

    if (victoriasJugador1 == 3) {
        cout << "\n¡Jugador 1 gana el juego!\n";
    } else {
        cout << "\n¡Jugador 2 gana el juego!\n";
    }

    return 0;
}

void juego(int &a) {
    a = rand() % 3 + 1; // Genera un número aleatorio entre 1 y 3
}

void resultado(int c, int a, int &victoriasJugador1, int &victoriasJugador2) {
    if (a == c) {
        cout << "Es un empate.\n";
    } else if ((c == 1 && a == 2) || (c == 2 && a == 3) || (c == 3 && a == 1)) {
        cout << "¡Jugador 1 gana esta ronda!\n";
        victoriasJugador1++;
    } else {
        cout << "¡Jugador 2 gana esta ronda!\n";
        victoriasJugador2++;
    }
}

    
