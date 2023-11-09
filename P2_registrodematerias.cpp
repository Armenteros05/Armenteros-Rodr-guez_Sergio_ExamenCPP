#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Estudiante{
public:
    string nombre;
    int edad{};
    string grado;
    vector<string> materias;
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
    void agregar_materia(){
        string materia;
        cout<<"Ingrese las clases que tiene: ";
        cin>>materia;
        materias.push_back(materia);
    }
    void mostrar_materias(){
        cout<<"Las materias son: "<<endl;
        for (int i = 0; i < materias.size(); i++) {
            cout<<materias[i]<<endl;
        }
    }
};
    int main(){
        Estudiante estudiante;

        cout << "Por favor, proporciona la informacion del estudiante:" << endl;
        estudiante.mostrar_info();
        estudiante.agregar_materia();
        estudiante.agregar_materia();
        estudiante.mostrar_materias();

        return 0;
    }
