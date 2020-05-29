#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int cont;

    //Goto
    inicio:

    //Processamento e Saída
    cont = 1;
    do{
        cout << "Martino - " << cont << "\n";
        cont++;
    }   while(cont <= 20);
        
        cout << cont << "\nRotina Finalizada!\n";
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}