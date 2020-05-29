#include <iostream>

using namespace std;

int main(){

    //Declaração de variáveis
    char ctn;
    int ent, dis;

    //Goto
    inicio:

    //Processamento e Saída
    cin >> ent;
    dis = ent * 2;

    cout << dis << " minutos" << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}