#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "ptb");

    //Declaração de variáveis
    char ctn;
    int X;
    float Y, res;


    //Goto
    inicio:
    cout << fixed << setprecision(3);

    //Processamento e Saída
    cin >> X >> Y;
    res = X / Y;
    cout << res << " km/l" << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}