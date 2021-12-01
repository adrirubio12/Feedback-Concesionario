#include <vector>
#include <iostream>
#include "Cliente.cpp"
#include "Coche.cpp"

class Concesionario
{
private:
std::vector< Coche* > _stock;
std::vector< Coche* > _repairing;
public:
Concesionario(void);
~Concesionario(void);
/*!
\brief Añade un nuevo coche al inventario
@returns false si el coche ya estaba en el inventario o en el taller
*/
bool addCarToStock( Coche* car ); 
//Se comprueba que el coche que se quiere añadir esta en _stock o en _repairing.
//Si esta en alguno de los dos vectores se retorna False
//Si no lo encuentra añade el coche al vector _stock y retorna True
/*!
\brief Vende un coche del inventario al usuario y lo añade a su lista de coches
Tras ejecutar esta función se quita el coche del inventario
@returns false si el coche no está en inventario o el cliente no puede pagarlo
*/
bool sellCar( Cliente* client, std::string license );
//Se comprueba si el coche que se quiere vender esta en el inventario del concesionario y si el cliente puede pagar el coche.
//Si alguna de las dos condiciones no se cumple, el método retornara false y no se venderá.
//Si se cumplen las dos condiciones, el método retornara true, se le añade el coche al cliente
//y se quita el coche al inventario del concesionario.
/*!
\brief Toma un coche averiado del cliente y lo añade al taller
@returns false si el cliente no tiene ese coche o el coche no está averiado
*/
bool checkCarInGarage( Cliente* client, std::string license );
/*!
\brief Toma un coche listo del taller y se lo devuelve al cliente
@returns false si el coche no está en el taller y en estado de listo
*/
bool retrieveCarFromGarage( Cliente* cliente, std::string license );

};