#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int n1, n2, nota;
    string res;

    //Goto
    inicio:

    //Processamento e Saída
    cout << "Digite a 1a nota: ";
    cin >> n1;
    cout << "Digite a 2a nota: ";
    cin >> n2;

    nota = n1 + n2;

    res = (nota >= 60) ? "Aprovado!\n\n" : "Reprovado!\n\n";

    cout << res;

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}