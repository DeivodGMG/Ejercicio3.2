#include <iostream>
#include <string>
using namespace std;
struct Pais {
    string nombre;
    int habitantes;
};
int main() {
    Pais pais1, pais2, pais3;

    pais1.nombre = "Pais1";
    pais1.habitantes = 5000000;

    pais2.nombre = "Pais2";
    pais2.habitantes = 10000000;

    pais3.nombre = "Pais3";
    pais3.habitantes = 7500000;

    Pais mayor = pais1;
    if (pais2.habitantes > mayor.habitantes) {
        mayor = pais2;
    }
    if (pais3.habitantes > mayor.habitantes) {
        mayor = pais3;
    }

    cout << "El país con mayor cantidad de habitantes es: " << mayor.nombre << " con " << mayor.habitantes << " habitantes." << endl;
    return 0;
}