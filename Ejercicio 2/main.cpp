#include <iostream>

using namespace std;

int main()
{
    //Declaramos las variables en flotante
    float m1,b1,m2,b2,inty,intx;
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

    // Si la pendiente es igual se abren dos posibilidades
    if (m1==m2){
        if (b1==b2) {
            //Que sean la misma recta (misma ordenada al origen)
            cout << "Las rectas se cortan en infinitos puntos (son iguales)" << endl;
        } else {
            //Que las rectas sean paralelas
            cout << "Las rectas no se cortan (son paralelas) " << endl;
        }
    //Si no ocurren estos casos seguimos operando
    } else {
    //Encontramos la intersección en x igualando y haciendo operaciones
    intx=(b2-b1)/(m1-m2);
    //Reemplazamos en la ecuacion original para la intersección en y
    inty=intx*m1+b1;
    //Mostramos por pantalla el resultado
    cout << "Interseccion de la recta en y: " << inty << endl;
    cout << "Interseccion de la recta en x: " << intx << endl;
    }
}
