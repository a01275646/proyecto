#ifndef COTIZACION_H
#define COTIZACION_H


#include <string>
#include <vector>
using namespace std;

class Cotizacion{
    private:
        string agencia;
        string propietario;
        int seguro;
        vector<Vehiculo*> vehiculos;

    public:
        //Constructores
        Cotizacion(string agc, string prt, int sgr) {
            agencia = agc;
            propietario = prt;
            int sgr;
        }

        //Getters
        string getAgencia() {
            return agencia;
        }

        string getPropietario() {
            return propietario;
        }

        int getSeguro() {
            return seguro;
        }

        vector<Vehiculo*> getVehiculos() {
            return vehiculos;
        }

        //Setters
        void setAgencia(string agc) {
            agencia = agc;
        }

        void setPropietario(string prt) {
            propietario = prt;
        }

        void setSeguro(int sgr) {
            seguro = sgr;
        }

        //Metodos comunes
        void agregarIntegrante(Vehiculo* vehiculo) {
            vehiculos.push_back(vehiculo);
        }

        void mostrarIntegrantes() {

            for(int i = 0; i < vehiculos.size(); i++) {
                vehiculos[i]->imprimeDatos();
                cout << endl;
            }

        }
};

#endif