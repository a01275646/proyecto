#include <string>

class Valor{
    private:
        float precio;
        float impuesto;
    public:
    //Constructor
    Valor () {
        precio = 500000;
        impuesto = 0.03 * precio;
    }

    Valor (float p) {
        precio = p;
    }

    //Getters
    float getPrecio() {
        return precio;
    }

    //Setters
    void setPrecio(float p) {
        precio = p;
    }

    //Métodos comunes
    float calculo_del_valor_total() {
        return precio + impuesto;
    }
        
};