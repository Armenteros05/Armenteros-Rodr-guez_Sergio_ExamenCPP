//lo hare con la divisón por cero
#include <iostream>
using namespace std;
int divide(int x, int y){
    if(y==0){
        throw "No se puede dividir por cero";
    }
    return x/y;
}
int main(){}