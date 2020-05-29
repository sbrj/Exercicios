#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
    
    setlocale(LC_ALL, "ptb");

    //Declaração de variáveis
    char ctn;

    //Goto
    inicio:

    if(argc > 1){
        if(!strcmp(argv[1], "sol")){
            cout << "Vou sair \n";
        }   else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ficar em casa\n";
        }   else {
            cout << "To de cama\n";
        }
    }

    //Processamento e Saída
    cout << argv[1] << "\n\n";
    cout << argv[2] << "\n";
    cout << argc << "\n";
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}