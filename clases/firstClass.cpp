#include <stdio.h>
#include <iostream>

using namespace std;

class Persona {
    private: 
        int edad;
        string nombre;
    public:
        Persona(int, string);
        void leer();
        void correr();
};

Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout << "Soy " << nombre << " y estoy leyendo un libro." << endl;
}

void Persona::correr(){
    cout << "Soy " << nombre << " y estoy corriendo un maraton " << "y tengo " << edad << endl;
}

int main(){
    // creando un objeto.
    Persona p1 = Persona(24, "Antonio");
    Persona p2(19, "Maria");

    p1.leer();
    p2.correr();

    return 0;
}
