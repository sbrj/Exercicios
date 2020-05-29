#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int tam=10;
    int vetor[tam];
    int i;

    //Goto
    inicio:

    //Processamento e Saída
    for(i=1; i<(sizeof(vetor)/4)+1; i++){
        vetor[i] = i * 10; 
        cout << vetor[i] << "\n";
    }

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}