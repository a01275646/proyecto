#ifndef PICKUP_H
#define PICKUP_H


#include <string>
#include <iostream>
#include "vehiculo.h"
using namespace std;

class PickUp{

    private:
        string estilop;
        int cabinas;
        float carga;
        float impuesto = 0;

    public:

        PickUp(string estp, int cab, float carg) {
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

    
        
