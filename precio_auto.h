#include <string>

class Valor{
    private:
        float precio;
        float impuesto;
        float valor_total;
    public:
        Valor() {
            precio = 700,000;
            impuesto = 0.16 * precio;
            valor_total = precio + impuesto;

     }
        void imprimeDatos() {
            cout << "Equipo" << precio << endl;
            cout << "Año" << impuesto << endl;
            cout << "Valor Total" << valor_total << endl;
        }
};