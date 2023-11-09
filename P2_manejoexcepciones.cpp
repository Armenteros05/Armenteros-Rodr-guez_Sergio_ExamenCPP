//lo hare con la divisón por cero
#include <iostream>
using namespace std;
int divide(int x, int y){
    if(y==0){
        throw "No se puede dividir por cero";
    }
    return x/y;
}
int main(){
int a,b;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    try {
        int resultado = divide(a, b);
        cout << "Resultado de la división: " << resultado << endl;
    } catch (const char* mensaje) {
        cout << "Excepcion detectada: " << mensaje << endl;
    }}