#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int cont;

    //Goto
    inicio:

    //Processamento e Saída
    while(cont < 1000){
        cout << cont << "\n";

        if(cont == 100){
            break;
        }
        
        cont++;
    }

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}