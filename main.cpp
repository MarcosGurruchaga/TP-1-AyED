#include <iostream>

using namespace std;

int main()
{
    //Declaramos las variables en flotante
    float m1,b1,m2,b2,inty,intx,m;
    cout << "Calculadora de interseccion entre rectas en r2" << endl;
    cout << "Ecuacion de la forma: y=mx+b" << endl;
    cout << "" << endl;
    //Insertamos los valores de pendiente y ordenada de la primera ecuacion
    cout << "Primera recta:"  << endl;
    cout << "Inserte el valor de m (pendiente)" << endl;
    cin >> m1;
    cout << "Inserte el valor de b (ordenada al origen)" << endl;
    cin >> b1;
    //Insertamos los valores de pendiente y ordenada de la segunda ecuacion
    cout << "Segunda recta:"  << endl;
    cout << "Inserte el valor de m (pendiente)" << endl;
    cin >> m2;
    cout << "Inserte el valor de b (ordenada al origen)" << endl;
    cin >> b2;
    //Depejamos x
    m=m1-m2;
    if (m==0){
        cout << "Las rectas son paralelas (no se intersectan) " << endl;
    } else {
    intx=(b2-b1)/m;
    //Reemplazamos en y
    inty=intx*m1+b1;
    //Mostramos por pantalla el resultaod
    cout << "Interseccion de la recta en y: " << inty << endl;
    cout << "Interseccion de la recta en x: " << intx << endl;
    }
}
