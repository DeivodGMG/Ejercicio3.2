#include <iostream>
using namespace std;
int main()
{
   struct {
       string name;
       string apellidos;
       float sueldo;
       int year;
} Empresa;
     cout << "Ingrese el nombre del empleado:" << endl;
   cin >> Empresa.name;
   cout << "Ahora ingrese sus apellidos:" << endl;
   cin >> Empresa.apellidos;
   cout << "Su sueldo:" << endl;
   cin >> Empresa.sueldo;
   cout << "Y por ultimo, su edad: " << endl;
   cin >> Empresa.year;

cout << "** Resultados **\n";
        cout << "Nombre: " << Empresa.name << endl;
        cout << "Apellidos: " << Empresa.apellidos << endl;
        cout << "Sueldo: " << Empresa.sueldo << endl;
        cout << "Edad: " << Empresa.year << endl;
    return 0;
}