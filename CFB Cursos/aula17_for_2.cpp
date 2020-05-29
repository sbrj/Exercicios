#include <iostream>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int a, b, c;

    for(a=0,b=1,c=2; a<=15 && b<=15; a++, b+=2, c+=2){
        cout << a << " -- ";
        cout << b << " -- ";
        cout << c << "\n";
    } 

    //Goto
    inicio:

    //Processamento e Saída

    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}