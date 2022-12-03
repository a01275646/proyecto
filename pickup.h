#ifndef PICKUP_H
#define PICKUP_H


#include <string>
#include <iostream>
#include "vehiculo.h"
using namespace std;

class PickUp : public Vehiculo{

    private:
        string estilop;
        int cabinas;
        float carga; //Peso en toneladas
        float impuesto = 0;

    public:

        PickUp(string estp, int cab, float carg, string mrc, int an, string mdl, string clr, int prc) : Vehiculo(mrc, an, mdl, clr, prc) {
            estilop = estp;
            cabinas = cab;
            carga = carg;
        }
        // Getters
        string getEstiloP() {
            return estilop;
        }

        float getCabinas() {
            return cabinas;
        }

        float getCarga() {
            return carga;
        }

        // Setters
        void setEstilo(string estp){
            estilop = estp;
        }
        void setTurbo(int cab){
            cabinas = cab;
        }
        void setCarroceria(float carg){
            carga = carg;
        }

        void imprimeDatos(){
            cout << "Estilo de la Pick Up: " << estilop << endl;
            cout << "Número de cabinas: " << cabinas << endl;
            cout << "Capacidad de carga de la Pick Up: " << carga << endl;
        };

};


#endif

    
        
