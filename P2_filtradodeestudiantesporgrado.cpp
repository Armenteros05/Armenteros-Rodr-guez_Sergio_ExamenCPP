#include <iostream>
#include <vector>

// Definición de la clase Estudiante
class Estudiante {
public:
    std::string nombre;
    std::string grado;

    Estudiante(std::string nombre, std::string grado) : nombre(nombre), grado(grado) {}
};

// Función para filtrar estudiantes por grado
std::vector<Estudiante> filtrarPorGrado(const std::vector<Estudiante>& estudiantes, const std::string& gradoBuscado) {
    std::vector<Estudiante> estudiantesFiltrados;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == gradoBuscado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }

    return estudiantesFiltrados;
}

int main() {
    // Ejemplo de uso
    std::vector<Estudiante> listaEstudiantes = {
            {"Juan", "Licenciatura"},
            {"Maria", "Maestría"},
            {"Carlos", "Licenciatura"},
            {"Ana", "Doctorado"},
            // Agrega más estudiantes según sea necesario
    };

    std::string gradoBuscado = "Licenciatura";

    // Filtrar estudiantes por grado
    std::vector<Estudiante> estudiantesFiltrados = filtrarPorGrado(listaEstudiantes, gradoBuscado);

    // Mostrar resultados
    std::cout << "Estudiantes filtrados por grado " << gradoBuscado << ":\n";
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        std::cout << estudiante.nombre << " - Grado: " << estudiante.grado << "\n";
    }

    return 0;
}
