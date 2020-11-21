#include <iostream>

using namespace std;

class Rectangulo{
    private:
        int largo;
        int ancho;
    public:
        Rectangulo(int,int);
        void perimetro();
        void area();
};

Rectangulo::Rectangulo(int _largo, int _ancho){
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::area(){
    int A = (ancho * largo) / 2;
    cout << "El area del triangulo es: " << A << endl;
}

void Rectangulo::perimetro(){
    int P = ancho * 3;
    cout << "El perimetro del triangulo es: " << P << endl;
}

int main(){
    Rectangulo t1(5,10);
    
    t1.area();
    t1.perimetro();

    return 0;
}
