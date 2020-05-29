#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    //Declaração de variáveis
    char ctn;
    float x1, x2, y1, y2, res1, res2, dis;

    //Goto
    inicio:

    //Processamento e Saída
    cout << fixed << setprecision(4);

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    res1 = x2 - x1;
    res1 *= res1;
    res2 = y2 - y1;
    res2 *= res2;

    dis = sqrt(res1 + res2);

    cout << dis << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}