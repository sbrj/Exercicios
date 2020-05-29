#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;

    int c1, n1, c2, n2;
    float v1, v2, pagar;

    //Goto
    inicio:

    //Processamento e Saída
    cout << fixed << setprecision(2);

    cin >> c1 >> n1 >> v1;
    cin >> c2 >> n2 >> v2;

    pagar = v1*n1 + v2*n2;
    
    cout << "VALOR A PAGAR: R$ " << pagar << endl;

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}