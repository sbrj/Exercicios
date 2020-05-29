#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    float P1=3.5, P2=7.5;
    double A, B, MEDIA;

    //Goto
    inicio:

    //Processamento e Saída
    cout << fixed << setprecision(5);

    cin >> A >> B;
    A *= P1;
    B *= P2;
    MEDIA = (A + B) / (P1 + P2);

    cout << "MEDIA = " << MEDIA << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}