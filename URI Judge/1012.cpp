#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.14159

int main(){
    
    //Declaração de variáveis
    char ctn;
    double A, B, C;
    double tri, cir, tra, qua, ret;

    //Goto
    inicio:

    //Processamento e Saída
    cin >> A >> B >> C;
    
    tri = (A * C)/2;
    cir = pi * (C*C);
    tra = ((A+B) * C)/2;
    qua = B * B;
    ret = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << cir << endl;
    cout << "TRAPEZIO: " << tra << endl;
    cout << "QUADRADO: " << qua << endl;
    cout << "RETANGULO: " << ret << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}