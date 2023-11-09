#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> calificaciones= {10,9,8,7,6,5,4,3,2,1};
    cout << "Las calificaciones son: " << endl;
    for (int calificacion : calificaciones) {
        cout << " " << calificacion;
    }
    cout << endl;
    int suma=0;
    for (int calificacion : calificaciones) {
        suma+=calificacion;
        
    }
    double promedio= suma/calificaciones.size();
    cout<<"El promedio es: "<<promedio<<endl;
    return 0;

}