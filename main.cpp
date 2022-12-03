#include <iostream>
using namespace std;

#include "vehiculo.h"
#include "pickup.h"
#include "auto.h"
#include "cotizacion.h"

int main(){

    Cotizacion vehiculos;

    vehiculos.agregarIntegrante(new Auto("Híbrido", 1.0, "Sedán", 0.17, "Toyota", 2022, "Prius", "Negro", 500000));
    vehiculos.agregarIntegrante(new Auto("Deportivo", 2.0, "Muscle Car", 0.17, "Ford", 2021, "Shelby", "Negro", 1000000));
    vehiculos.agregarIntegrante(new PickUp("4x4", 2, 750, "Jeep", 2022, "Mojave", "Gris", 1300000));
    vehiculos.agregarIntegrante(new PickUp("Lariat", 2, 750, "Ford", 2018, "Lobo", "Rojo", 800000));

    vehiculos.mostrarIntegrantes();

    return 0;
}