#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int A, B, PROD;

    //Goto
    inicio:

    //Processamento e Saída
    cin >> A >> B;
    PROD = A * B;

    cout << "PROD = " << PROD << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}