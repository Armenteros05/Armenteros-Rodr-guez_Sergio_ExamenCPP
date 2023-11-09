#include <iostream>
#include <string>
using namespace std;
class Estudiante{
private:
    string nombre;
    int edad;
    string grado;
public:
    void mostrar_info(){
        cout<<"Nombre: "<<nombre<<endl;
        cin>>nombre;
        cout<<"Edad: "<<edad<<endl;
        cin>>edad;
        cout<<"Grado: "<<grado<<endl;
        cin>>grado;
    }
};
int main(){
    Estudiante estudiante1;
    estudiante1.mostrar_info();
    return 0;
}