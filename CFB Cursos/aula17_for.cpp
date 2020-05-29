#include <iostream>

using namespace std;
int cont;

int main(){
    
    //Declaração de variáveis
    char ctn;

    //Goto
    inicio:

    //Processamento e Saída
    for(cont = 0; cont <= 10; cont += 2){
        if(cont == 10){
            cout << cont << "\n";
            break;
        }
        cout << cont << " + 2\n";
    }
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}