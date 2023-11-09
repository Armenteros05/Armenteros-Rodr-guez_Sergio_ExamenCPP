#include <iostream>
#include <string>
class profesores{
public:
std::string nombre;
    int edad{};
    std::string grado;
    std::string materia;
    void mostrar_info_profesor() {
        std::cout << "Ingresa el nombre del profesor: ";
        std::cin >> nombre;

        std::cout << "Ingresa la edad del profesor: ";
        std::cin >> edad;

        std::cout << "Ingresa el grado del profesor: ";
        std::cin >> grado;

        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
    void agregar_materia(){
        std::cout<<"Ingrese las materias que imparte: ";
        std::cin>>materia;
    }
    void mostrar_materias(){
        std::cout<<"Las materias que imparte son: "<<std::endl;
        std::cout<<materia<<std::endl;
    }
};
int main(){
    profesores profesor;

    std::cout << "Por favor, proporciona la informacion del profesor:" << std::endl;
    profesor.mostrar_info_profesor();
    profesor.agregar_materia();
    profesor.mostrar_materias();

    return 0;
}