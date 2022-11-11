#include <string>

class Modelo{

    private:
        string marca;
        int anio; //Tamaño en metros
    public:
        // Constructor por omisión
        Modelo() {
            marca = "Nissan"; "Chevrolet"; "Ford"; "Kia";
            anio = 2022;
        }
        // Constructor con parámetros
        Modelo(int an) {
            anio = an;
        }

        //Getters
        string getMarca() {
            return marca;
        }
        int getAnio() {
            return anio;
        }
        //Setters
        void setMarca(string mrc){
            marca = mrc;
        }
        void setAnio(float an){
            anio = an;
        }
        //Métodos de la clase
        void imprimeDatos() {
            cout << "Equipo" << marca << endl;
            cout << "Año" << anio << endl;
        }
};