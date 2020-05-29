#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int val, tst;

    //Goto
    inicio:

    //Processamento e Saída
        /*switch(){
            case const;
                comandos;
                break;
            case const2;
                comandos;
                break;
            default:
                comandos;
        }
    */

   cout << "Selecione uma cor: ";
   cout << "[1] verde, [2]azul, [3]roxo \n\n";
   cin >> val;

   switch(val){
        case 1:
            cout << "Cor verde\n";
            break;
        case 2:
            cout << "Cor azul\n";
            break;
        case 3:
            cout << "Cor roxo\n";
            break;
        default:
            cout << "Valor inválido!\n";

   }

    cin >> tst;
        
    switch (tst)
    {
        case 1:
        case 2:
        case 3:
            cout << "Cor azul\n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor verde\n";
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