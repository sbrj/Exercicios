#include <iostream>
#include <stdlib.h>

using namespace std;

int esc, n, l, c, cont;
int base[3][3];
char jog[3][3];
int jogo[9];

void jogador(char jgd); // funcao que guarda a posicao onde foi jogado
void mostra(); // funcao que mostra inicialmente o jogo
void disp(); // funcao que mostra os disponíveis
int conf(); // funcao que confere se houve acerto
int pega(int esc); // funcao que atribui uma acerto a uma variável

int main(){

    int cont;
    bool fim, confere;

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

        if(cont>4){
            confere = conf();
            cout << "sai do confere - " << confere << "\n";
            if(confere){
                cout << "O fim chegou...";
                fim = true;
            }
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
            jogo[n] = n;
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
                cout << "jog" << l << c << "-- jgd - " << jgd << "\n";
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

int conf(){
    bool verificado, fim;
    int a=0, b=0, c=0;
    char x='-', y='-', z='-';
    int jogs[8][3]={1,2,3,
                    4,5,6,
                    2,5,8,
                    1,4,7,
                    3,6,9,
                    7,8,9,
                    1,5,9,
                    3,5,7};
    
    verificado = false;
    cout << "entra funcao conf, antes do for" << "\n\n";
    
        for(n=0;n<8;n++){
            a = jogs[n][0];
            b = jogs[n][1];
            c = jogs[n][2];

            cout << "jogs --0 " << jogs[n][0] << "\n" << "jogs --1 " << jogs[n][1] << "\n" << "jogs --2 " << jogs[n][2] << "\n";
            
            cout << "jogs a - antes do pega a - " << a << "\n";
            x = pega(a);
            cout << "resultado de pega a = x - " << x << "\n\n";
            cout << "jogs b - antes do pega b - " << b << "\n";
            y = pega(b);
            cout << "resultado de pega b = y - " << y << "\n\n";
            cout << "jogs c - antes do pega c - " << c << "\n";
            z = pega(c);
            cout << "resultado de pega c = z - " << z << "\n\n";
            if(n==2){
                disp();
            }

            if((x=='x' || x=='o') && (x==y && y==z)){
                fim = true;
                verificado = true;
                cout << "verificado - " << verificado << "\n\n";
                break;
            }
        fim = true;
        }
        cout << "fim conferencia" << "\n\n";
        if(x=='x' && y=='x' && z=='x'){
            cout << "Parabens jogador 1, voce venceu!";
        }   else if(x=='o' && y=='o' && z=='0'){
            cout << "Parabens jogador 2, voce venceu!";
        }   else{
            cout << "Nao houve vencedores! Parabens por terem jogado!";
        }
        cout << "Resultado: \n";
        disp();
    return verificado;
}

int pega(int esc){
    int col, lin;
    char result;
    cout << "entra na funcao pega\n\n";
    cout << "esc - " << esc << "\n";

    if(esc<=3){
        lin = 0;
        col = esc - 1;
    } 
    if(esc>3 && esc<=6){
        lin = 1;
        col = esc - 4;
    } 
    if(esc>6){
        lin = 2;
        col = esc - 7;
    }
    cout << "lin - " << lin << " : col - " << col << "\n" << "jog - " << jog[lin][col] << "\n";
    result = jog[lin][col];
    cout << "result - " << result << "\n";
    return result;
}
