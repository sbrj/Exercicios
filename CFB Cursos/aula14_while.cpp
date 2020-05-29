#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int n;

    //Goto
    inicio:

    n = 1;

    //Processamento e Saída
    while(n++<10){
        cout << n << "\n";
        if(n == 7){
            break;
        }
    }

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}