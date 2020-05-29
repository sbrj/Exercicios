#include <iostream>

using namespace std;

int main(){
        
        int num;

        num = 4;
        if(num > 4 && num < 8){
            cout << "Tudo certo com &";
        }   else if (num > 8 || num < 4){
                cout << "Tudo certo com o ou";
            }   else {
                cout << "o resultado é 4";
                }
    
        return 0;
}