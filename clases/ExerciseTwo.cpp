#include <iostream>

using namespace std;

class Tiempo{
    private:
        int hours;
        int minuts;
        int seconds;

    public:
        Tiempo(int,int,int);
        Tiempo(int);
        void showTime();
};

Tiempo::Tiempo(int _hours, int _minuts, int _seconds){
    hours = _hours;
    minuts = _minuts;
    seconds = _seconds;
}

Tiempo::Tiempo(int tiempo){
    hours = tiempo / 3600;
    minuts = (tiempo % 3600) / 60;
    seconds = tiempo % 60;
}

void Tiempo::showTime(){
    cout << "El tiempo es: " << hours << ":" << minuts << ":" << seconds << endl;
}

int main(){
    Tiempo t1(8,45,27);
    Tiempo t2(31527);

    t2.showTime();
    t1.showTime();

    return 0;
}