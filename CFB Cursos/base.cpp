#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;

    //Goto
    inicio:

    //Processamento e Saída

    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}