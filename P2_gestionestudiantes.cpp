#include <iostream>
#include <string>
using namespace std;
class Estudiante{
private:
    string nombre;
    int edad{};
    string grado;
public:
    void mostrar_info() {
        cout << "Ingresa el nombre del estudiante: ";
        cin >> nombre;

        cout << "Ingresa la edad del estudiante: ";
        cin >> edad;

        cout << "Ingresa el grado del estudiante: ";
        cin >> grado;

        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Grado: " << grado << endl;
    }
};

int main() {
    Estudiante estudiante;

    cout << "Por favor, proporciona la informacion del estudiante:" << endl;
    estudiante.mostrar_info();

    return 0;
}