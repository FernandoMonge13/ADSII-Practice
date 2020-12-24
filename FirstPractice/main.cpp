#include <iostream>
#include <math.h> // Libreria de mate
#include <conio.h> // Para que la vara no se cierre
#include <stdlib.h> // Para que la vara no se cierre
using namespace std;
void conditional1(int);
void conditional2(int);
void iteration1();
void vector();
void vector2();
void matrix();

int main() {

    conditional1(5);
    conditional2(9);
    //vector();
    //vector2();
    //matrix();

    return 0;
}
void conditional1(int num){
    if (num <  5){
        cout << "Chingamadre";

    }else{
        cout << "\nChingamadre X2";
    }
}

void conditional2(int num){
    switch (num) {
        case 1:
            cout << "\nEs 1";
            break;
        case 2:
            cout << "\nEs 2";
            break;
        case 3:
            cout << "\nEs 3";
            break;
        default:
            cout << "\nFuera de Rango";
            break;
    }
}

void iteration1(){
    int i = 0;
    while (i < 11){
        cout << i << endl;
        i++;
    }
}

void iteration2(){
    int i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i < 11);

}

void iteration3(){
    for (int i = 0; i <= 10; ++i) {
        cout << i << endl;
    }
}

void vector (){
    int list [] = {25,36,28,14,46};
    int suma = 0;

    for (int i = 0; i < 5; ++i) {
        suma += list[i];
    }
    cout << suma;
}

void vector2 (){

    int num[100],n;
    cout<<"Deme la cantidad de elementos: ";
    cin>>n;

    for (int i = 0; i < n; ++i) {
        cout<< "Deme numero: ";
        cin>> num[i];
    }

    for (int i = 0; i <n ; ++i) {
        cout << i << "->" <<num[i]<< endl;
    }
}

void matrix (){

    int num[100][10], filas, colum;

    cout << "Deme filas: ";
    cin>>filas;
    cout << "Deme columnas: ";
    cin>>colum;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < colum; ++j) {
            cout << "Deme un numero [" << i <<"][" << j << "]: ";
            cin >> num[i][j];
        }
    }

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < colum; ++j) {
            cout << num[i][j];
        }
        cout<<"\n";
    }

}