#ifndef VEHICULO_H
#define VEHICULO_H


#include <string>
#include <iostream>
using namespace std;


class Vehiculo{

    protected:
        string modelo;
        string marca;
        int anio;
        string color;
        int precio;

    public:
        // Constructor con parámetros
        Vehiculo(string mrc, int an, string mdl, string clr, int prc) {
            marca = mrc;
            anio = an;
            modelo = mdl;
            color = clr;
            precio = prc;
        }

        //Getters
        string getModelo() {
            return modelo;
        }
        string getMarca() {
            return marca;
        }
        int getAnio() {
            return anio;
        }
        string getColor() {
            return color;
        }
        int getPrecio() {
            return precio;
        }
        //Setters
        void setModelo(string mod){
            modelo = mod;
        }
        void setMarca(string mrc){
            marca = mrc;
        }
        void setAnio(int an){
            anio = an;
        }
        void setColor(string clr){
            color = clr;
        }
        void setPrecio(int prc){
            precio = prc;
        }
        //Métodos de la clase
        virtual void imprimeDatos() {
            cout << "Marca del vehiculo: " << marca << endl;
            cout << "Modelo del vehiculo: " << modelo << endl;
            cout << "Año: " << anio << endl;
            cout << "Color: " << color << endl;
            cout << "Precio del auto: " << precio << endl;
        }
};


#endif