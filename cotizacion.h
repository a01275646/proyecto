#include <string>

#include "precio_auto.h"
#include "modelo_auto.h"


class Cotizacion{
    private:
        Modelo marca;
        Modelo anio;
        Valor valor;
        string nombre;
    public:
        bool pago_efectivo;
        bool pago_credito;
        bool pago_transaccion;
        //Constructores
        Cotizacion() {
            pago_efectivo = false;
            pago_credito = false;
            pago_transaccion = true;
            string = "firma";
        }

        Cotizacion(Modelo m, Modelo a, Valor v, string n, bool pe, bool pc, bool pt) {
            marca = m;
            anio = a;
            valor = v;
            nombre = n;
            pago_efectivo = pe;
            pago_credito = pc;
            pago_transaccion = pt;
        }

        //Getters
        Modelo getMarca() {
            return marca;
        }

        Modelo getAnio() {
            return anio;
        }

        Valor getValor() {
            return valor;
        }

        string getNombre () {
            return nombre;
        }

        bool getPagoEfectivo () {
            return pago_efectivo;
        }

        bool getPagoCredito () {
            return pago_credito;
        }

        bool getPagoTransaccion () {
            return pago_transaccion;
        }

        //Setters
        void setCirculo(Modelo m) {
            marca = m;
        }

        void setCirculo(Modelo a) {
            anio = a;
        }

        void setCirculo(Valor v) {
            valor = v;
        }

        void setNombre(string n){
            nombre = n;
        }

        void setPagoEfectivo(bool pe){
            pago_efectivo = pe;
        }

        void setPagoCredito(bool pc){
            pago_credito = pc;
        }

        void setPagoTransaccion(bool pt){
            pago_transaccion = pt;
        }

        //Metodos comunes
        
};