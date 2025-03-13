#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "¿Cuantos empleados son:" << endl;
    cin >> n;
   struct {
       string name;
       string apellidos;
       float sueldo;
       int year;
} Empresa[n];
int negro = 1;
for (int i = 0; i < n; i++) {
     cout << "Ingres el nombre del empleado:" << i <<endl;
   cin >> Empresa[i].name;
   cout << "Ahora ingrese sus apellidos:" << endl;
   cin >> Empresa[i].apellidos;
   cout << "Su sueldo:" << endl;
   cin >> Empresa[i].sueldo;
   cout << "Y por ultimo, su edad: " << endl;
   cin >> Empresa[i].year;
}
    return 0;
}
