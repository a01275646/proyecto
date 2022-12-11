#ifndef AUTO_H
#define AUTO_H

#include <string>
#include <iostream>
#include "vehiculo.h"
using namespace std;


class Auto : public Vehiculo {

    private:
        string estilo;
        float turbo;
        string carroceria;
        float impuesto;

    
    public:
        Auto(string est, float trb, string crr, float imp, string mrc, int an, string mdl, string clr, int prc) : Vehiculo(mrc, an, mdl, clr, prc){
            estilo = est;
            turbo = trb;
            carroceria = crr;
            impuesto = imp;
        }
        // Getters
        string getEstilo() {
            return estilo;
        }

        float getTurbo() {
            return turbo;
        }

        string getCarroceria() {
            return carroceria;
        }

        float getImpuesto() {
            return impuesto;
        }

        // Setters
        void setEstilo(string est){
            estilo = est;
        }
        void setTurbo(float trb){
            turbo = trb;
        }
        void setCarroceria(string crr){
            carroceria = crr;
        }
        void setImpuesto(float imp){
            impuesto = imp;
        }

        float valor_total() {
             return ((impuesto * precio) + precio);
        }

        void ImprimeDatos(){
            cout << "Estilo de auto: " << estilo << endl;
            cout << "Turbo: " << turbo << endl;
            cout << "Carroceria: " << carroceria << endl;
            cout << "Impuestos: " << impuesto << endl;
            cout << "Valor Total (impuesto incluido) : " << valor_total << endl;
        }

};


#endif