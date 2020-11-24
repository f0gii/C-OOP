#include <iostream>

using namespace std;

class Fecha{
    private:
        int day;
        int month;
        int year;

    public:
        Fecha(int,int,int);
        Fecha(long);
        void showDate();

};

Fecha::Fecha(int _day, int _month, int _year){
    day = _day;
    month = _month;
    year = _year;
}

Fecha::Fecha(long fecha){
    year = int(fecha / 10000);
    month = int((fecha - year * 10000)/100);
    day = int(fecha - year * 10000 - month * 100);
}

void Fecha::showDate(){
    cout << "La fecha es: " << day << "/" << month << "/" << year << endl;
}

int main(){
    Fecha t1(23,11,2020);
    Fecha t2(20201123);

    t1.showDate();
    t2.showDate();
    return 0;
}