#include <iostream>
#include <string>
using namespace std;
struct Cancion {
    string artista;
    string titulo;
    int duracion; //EN SEGUNDOS
    int tamano; //EN KB
};

int main() {
    Cancion cancion;

    cout << "Introduce el artista: ";
    getline(cin, cancion.artista);

    cout << "Introduce el título: ";
    getline(cin, cancion.titulo);
    cout << "Introduce la duración (en segundos): ";
    cin >> cancion.duracion;

    cout << "Introduce el tamaño del fichero (en KB): ";
    cin >> cancion.tamano;

    cout << "\nDatos de la canción:\n";
    cout << "Artista: " << cancion.artista << "\n";
    cout << "Título: " << cancion.titulo << "\n";
    cout << "Duración: " << cancion.duracion << " segundos\n";
    cout << "Tamaño del fichero: " << cancion.tamano << " KB\n";
    return 0;
}