#include <iostream>
#include <string.h>


using namespace std;


class Cliente{

    private:         
        string nombreDNI;
        int Inventario;

    public:
        Cliente(string, int);
};

Cliente::Cliente(string _nombreDNI, int _Inventario){

    nombreDNI = _nombreDNI;
    Inventario = _Inventario;

}