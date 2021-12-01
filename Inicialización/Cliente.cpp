#include <iostream>
#include <string.h>


using namespace std;


class Cliente{

    private:         
        string nombre;
        int Inventario;

    public:
        Cliente(string, int);
};

Cliente::Cliente(string _nombre, int _Inventario){

    nombre = _nombre;
    Inventario = _Inventario;

}