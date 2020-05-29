#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.14159

int main(){
    
    //Declaração de variáveis
    char ctn;
    double r, vol;

    //Goto
    inicio:

    //Processamento e Saída
    cout << fixed << setprecision(3);

    cin >> r;

    r *= r * r;

    vol = (4/3.0) * pi * r;

    cout << "VOLUME = " << vol << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}