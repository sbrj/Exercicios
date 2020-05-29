#include <iostream>
#include <iomanip>

using namespace std;

#define p1 2
#define p2 3
#define p3 5


int main(){
    
    //Declaração de variáveis
    char ctn;
    double a, b, c;
    double MEDIA;


    //Goto
    inicio:
    cout << fixed << setprecision(1);

    //Processamento e Saída
    cin >> a >> b >> c;
    
    a *= p1;
    b *= p2;
    c *= p3;

    MEDIA = (a + b + c) / (p1 + p2 + p3);

    cout << "MEDIA = " << MEDIA << endl;

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}