#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //Declaração de variáveis
    char ctn;
    /*
        ne = numero de empregados
        qh = quantidade de horas
        sh = salario hora
        sl = salario
    */
    int ne, qh;
    float sh, sl;

    //Goto
    inicio:
    cout << fixed << setprecision(2);

    //Processamento e Saída
    cin >> ne >> qh >> sh;

    sl = sh * qh;

    cout << "NUMBER = " << ne << endl;
    cout << "SALARY = U$ " << sl << endl;
    
    cout << "Quer continuar? ";
    cin >> ctn;

    if(ctn == 's' || ctn == 'S'){
        goto inicio;
    }

    return 0;
}