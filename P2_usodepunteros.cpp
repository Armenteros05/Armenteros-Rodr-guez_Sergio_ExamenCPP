#include <iostream>

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
   int n1= 7;
   int n2= 2;
    std::cout<<"Los valores originales son:" <<n1<<" y "<<n2<<std::endl;
    int *p1=&n1;
    int *p2=&n2;
    intercambiar(p1,p2);
    std::cout<<"Los valores intercambiados son:" <<n1<<" y "<<n2<<std::endl;
    return 0;
}