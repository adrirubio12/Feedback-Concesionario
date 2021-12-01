#include <iostream>
#include <string.h>


using namespace std;
 

class Cliente{

    private:         
        string NombreDNI;
        int Inventario;

    public:
        Cliente(string, int);
};

Cliente::Cliente(string _nombreDNI, int _Inventario){

    NombreDNI = _nombreDNI;
    Inventario = _Inventario;

}