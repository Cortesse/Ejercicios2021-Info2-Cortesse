#include <iostream>
#include "Ej28-ClasePersona.h"
#include "Ej28-ClaseFutbolista.h"

using std::cout;
using std::endl;

//************************* Función principal *********************
int main()
{
    Persona uno("Juan", "Perez");
    Futbolista dos("Lionel", "Messi", 10);

    cout << "La persona es " << uno.obtenerNombre() << " " << uno.obtenerApellido() << endl;
    cout << "El futbolista es " << dos.obtenerNombre() << " " << dos.obtenerApellido();
    cout << " y su camiseta es la numero " << dos.obtenerNumero() << endl;

    return 0;
}
