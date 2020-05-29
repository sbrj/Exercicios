#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int lin=3, col=6;
    int matriz[lin][col];
    int l=1, c=1, i=1;

    //Goto
    inicio:

    //Processamento e Saída
    for(l; l<(sizeof(matriz)/4/col)+1; l++){
        for(c=1; c<(sizeof(matriz)/4/lin)+1; c++){
            matriz[l][c] = i;
            //cout << "l-" << l << " == c-" << c << " | ";
            cout << i << " | ";
            i++;
        }
        cout << "\n";
    }
    

    cout << "\nQuer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}