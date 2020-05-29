#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int A, B, C, D, DIFERENCA;


    //Goto
    inicio:

    //Processamento e Saída
    cin >> A >> B >> C >> D;
    DIFERENCA = (A*B-C*D);

    cout << "DIFERENCA = " << DIFERENCA << endl;

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}