#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //Declaração de variáveis
    char ctn;
    int x, y;
    float res;

    //Goto
    inicio:

    //Processamento e Saída
    cout << fixed << setprecision(3);

    cin >> x >> y;

    res = x * y;

    res = res / 12;
    
    cout << res << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}