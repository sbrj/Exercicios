#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main() {

    int a, b, res;
    string transp[4]={"carro","moto","barco","aviao"};

    cin >> a >> b;

    texto();
    soma(a,b);
    res = soma2(a,b);

    cout << "\nO valor de res é: " << res << endl;

    tr(transp);

    return 0;
}

void texto(){
    cout << "\nPrimeira funcao!\n";
}

void soma(int n1, int n2){
    cout << "soma dos valores: " << (n1 + n2) << endl;
}

int soma2(int n1, int n2){
    return n1+n2;
}

void tr(string tra[4]){
    for(int i=0; i<4; i++){
        cout << "Tipos de veículos cadastrados: " << tra[i] << "\n";
    }
}