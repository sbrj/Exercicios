#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    int a, b, c, m;

    //Goto
    inicio:

    //Processamento e Saída
    int a,b,c,MaiorAB;
    cin >> a >> b >> c;
    MaiorAB = (a+b+abs(a-b))/2;
    MaiorAB= (MaiorAB + c + abs(MaiorAB-c))/2;
    cout << MaiorAB << " eh o maior" << endl;

    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}