#include <iostream>
#include <vector>
#include <stdexcept>

// Excepción personalizada para productos duplicados
class ProductoDuplicadoException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Ese producto ya esta en la cesta.";
    }
};

// Clase para la lista de la compra
class ListaCompra {
public:
    // Método para agregar un producto a la lista
    void agregarProducto(const std::string& producto) {
        // Verificar si el producto ya está en la lista
        for (const std::string& p : productos) {
            if (p == producto) {
                throw ProductoDuplicadoException(); // Lanzar la excepción personalizada
            }
        }

        // Si el producto no está en la lista, agregarlo
        productos.push_back(producto);
        std::cout << "Producto agregado: " << producto << std::endl;
    }

    // Método para imprimir la lista de la compra
    void imprimirLista() const {
        std::cout << "Lista de la compra:\n";
        for (const std::string& producto : productos) {
            std::cout << "- " << producto << "\n";
        }
    }

private:
    std::vector<std::string> productos;
};

int main() {
    ListaCompra lista;
    std::string producto;

    std::cout << "Ingrese los productos a la lista de la compra (escriba 'fin' para finalizar):\n";

    while (true) {
        std::cout << "Producto: ";
        std::cin >> producto;

        if (producto == "fin") {
            break;
        }

        try {
            lista.agregarProducto(producto);
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    // Imprimir la lista de la compra
    lista.imprimirLista();

    return 0;
}
