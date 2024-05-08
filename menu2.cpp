#include <iostream>
using namespace std;
 int main ()
 {
char opcion;

do
{
cout << "Menu"<< endl;
cout << "A Carne Asada"<< endl;
cout << "B Pollo"<< endl;
cout << "C Cerdo"<< endl;
cout << "Seleccione una opcion"<< endl;
cin >> opcion;
cout << " opcion seleccionada "<< opcion << endl;

}
while (opcion != 'A' && opcion != 'B' && opcion != 'C');
return 0;

 }
 