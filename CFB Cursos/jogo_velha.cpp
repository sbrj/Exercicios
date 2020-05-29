#include <iostream>

using namespace std;

int main(){

    int base[3][3];
    char jog[3][3];
    int l, c, n=0;
    int x, z, cont;
    char j1, j2;
    bool fim=true, vazio=true;

    for(l=0; l<sizeof(base)/4/3; l++){
            for(c=0; c<sizeof(base)/4/3; c++){
                n++;
                base[l][c] = n;
                cout << n;
                if(c==2){
                    break;
                }
                cout << "|";            
            }
            cout << "\n";
        }

    do{
        for(l=0; l<sizeof(base)/4/3; l++){
            for(c=0; c<sizeof(base)/4/3; c++){
                cout << jog[l][c];
                if(c==2){
                    break;
                }
                cout << "|";            
            }
            cout << "\n";
        }

        cout << "Jogador 1 - escolha uma posicao de 1 a 9";
        cin >> j1;
        for(l=0; l<sizeof(base)/4/3; l++){
            for(c=0; c<sizeof(base)/4/3; c++){
                if(base[l][c]==j1){
                    jog[l][c] = 'X';
                    break;
                }
                cout << "|";            
            }
            cout << "\n";
        }
        
        cout << "Jogador 2 - escolha uma posicao de 1 a 9";
        cin >> j2;
        for(l=0; l<sizeof(base)/4/3; l++){
            for(c=0; c<sizeof(base)/4/3; c++){
                if(base[l][c]==j2){
                    jog[l][c] = 'O';
                    break;
                }
                cout << "|";            
            }
            cout << "\n";
        }
        cont++;

    }   while(cont<10);
    

    cout << "\n\n";

    for(x=0; x<sizeof(base)/4/3; x++){
        for(z=0; z<sizeof(base)/4/3; z++){
            cout << base[x][z];
            if(z==2){
                break;
            }
            cout << "|";
            
        }
        cout << "\n";
    }

    return 0;
}