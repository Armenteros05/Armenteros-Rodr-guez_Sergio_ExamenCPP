#include <iostream>
#include <string>
using namespace std;
class asistencia {
public:
    asistencia(string fecha, string estado) : fecha(fecha), estado(estado) {}
    string fecha;
    string estado;
void mostrar_asistencia() {
    cout << "Fecha: " << fecha << endl;
    cout << "Estado: " << estado << endl;
}
};
int main(){
    asistencia asistencia1("12/10/2021", "Presente");
    asistencia asistencia2("13/10/2021", "Ausente");
    asistencia asistencia3("14/10/2021", "Presente");
    asistencia asistencia4("15/10/2021", "Presente");
    asistencia asistencia5("16/10/2021", "Ausente");
    asistencia asistencia6("17/10/2021", "Presente");
    asistencia asistencia7("18/10/2021", "Presente");
    asistencia asistencia8("19/10/2021", "Presente");
    asistencia asistencia9("20/10/2021", "Presente");
    asistencia asistencia10("21/10/2021", "Presente");
    asistencia asistencia11("22/10/2021", "Presente");
    asistencia asistencia12("23/10/2021", "Presente");
    asistencia asistencia13("24/10/2021", "Presente");
    asistencia asistencia14("25/10/2021", "Presente");
    asistencia asistencia15("26/10/2021", "Presente");
    asistencia asistencia16("27/10/2021", "Presente");
    asistencia asistencia17("28/10/2021", "Presente");
    asistencia asistencia18("29/10/2021", "Presente");
    asistencia asistencia19("30/10/2021", "Presente");
    asistencia asistencia20("31/10/2021", "Presente");
    asistencia asistencia21("01/11/2021", "Presente");
    asistencia asistencia22("02/11/2021", "Presente");
    asistencia asistencia23("03/11/2021", "Presente");
    asistencia asistencia24("04/11/2021", "Presente");
    asistencia asistencia25("05/11/2021", "Presente");
    asistencia asistencia26("06/11/2021", "Presente");
    asistencia asistencia27("07/11/2021", "Presente");
    asistencia asistencia28("08/11/2021)", "Presente");
    return 0;

}