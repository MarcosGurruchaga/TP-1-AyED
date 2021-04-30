#include <iostream>

using namespace std;

int main()
{
    float vel;
    cout << "Convertidor de Km/h a m/s" << endl;
    cout << "Inserte un valor de velocidad en Km/h" << endl;
    cin >> vel;
    vel=(vel*10)/36;
    cout << "Velocidad: " << vel << "m/s"<< endl;
}
