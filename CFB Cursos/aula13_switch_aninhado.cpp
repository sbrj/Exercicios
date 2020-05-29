#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int val;

    //Goto
    inicio:

    //Processamento e Saída
    cout << "[1]carro\n[2]moto\n[3]aviao\n[4]barco\n[5]drone\n";
    cout << "Selecione um transporte: ";

    cin >> val;

    switch(val){
        case 1:
        case 2:
            cout << "Transporte terrestre\n";
            switch(val){
                case 1:
                    cout << "Carro selecionado\n";
                    break;
                case 2:
                    cout << "Moto selecionada\n";
                    break;
                default:
                    break;
            }
            break;
        case 3:
        case 5:
            cout << "Transporte aereo\n";
            break;
        case 4:
            cout << "Transporte maritimo\n";
            break;
        default:
            break;
    }

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}