#include <iostream>
using namespace std;
 int main ()
 {
char opcion, variable ='x';

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
while (opcion !=variable);

return 0;
 }
 