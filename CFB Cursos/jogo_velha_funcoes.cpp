#include <iostream>
#include <stdlib.h>

using namespace std;

int esc, n, l, c, cont;
int base[3][3];
char jog[3][3];

void jogador(char jgd);
void mostra();
void disp();

int main(){

    int cont;
    bool fim;

    cout << "Jogo da velha \n\n";
    mostra();
    system("cls");
    while (!fim)
    {

        if(cont%2==0){
            jogador('x');
        }    else{
            jogador('o');
        }
        
        cont++;
        
        if(cont==9){
            disp();
            fim = true;
        }
    }
    return 0;
}

void mostra(){

    cout << "As casas são disponíveis conforme disponibilizado abaixo: \n";
    n = 0;
    for (l=0; l<3; l++){
        for(c=0; c<3; c++){
            n++;
            base[l][c] = n;
            jog[l][c] = ' ';
            cout << base[l][c];
            if (c==2){
                break;
            }
            cout << '|';
        }
        cout << "\n";
    }
    system("pause");
}

void jogador(char jgd){
    
    system("cls");
    disp(); // funcao opções disponíveis
    
    if(jgd=='x'){
        cout << "Jogador 1 - ";
    } else {
        cout << "Jogador 2 - ";
    }
    
    do {
        cout << "Escolha uma opção disponível: ";
        cin >> esc;
    } while (esc<1 || esc>9);
    
    for(l=0; l<3; l++){
        for(c=0; c<3; c++){
            if(esc == base[l][c]){
                jog[l][c] = jgd;
                base[l][c] = 0;
            }
        }
    }
}

void disp(){

    for(l=0; l<3; l++){
        for(c=0; c<3; c++){
            cout << jog[l][c];
            if(c==2){
                break;
            }
            cout << '|';
        }
            cout << "\n";
    }
    
}