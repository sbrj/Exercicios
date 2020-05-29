#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float fact(float val, float vez, int sim);
float fact2(float val, float vez, int sim);
int qnt[6]={0,1,2,3,4,5};
float ent, tro;
int moe[6];

int main(){
    int i;
    float bas;
    float ar[6]={100,50,20,10,5,2};
    float ar2[6]={1.0,0.50,0.25,0.10,0.05,0.01};

    cin >> ent;
    bas = ent;
    cout << fixed << setprecision(2);

    i=0;
    while (ent>=2){
        cout << "ent - " << ent << endl;
        ent, qnt[i] = fact(ent, ar[i], qnt[i]);
        if(i>5){
            break;
        }        
        i++;
    }

    tro = ent;
    i = 0;
    while (tro>0.00){
        cout << "tro - " << tro << endl;
        tro, moe[i] = fact2(tro, ar2[i], i);
        cout << "moe [i] - " << moe[i] << endl;
        if(i>5){
            break;
        }
        i++;

    }
    
    cout << bas << "\n";

    i=0;
    for(i;i<6;i++){
        cout << qnt[i] << " nota(s) de " << ar[i] << endl;
    }

    i=0;
    for(i;i<6;i++){
        cout << moe[i] << " moeda(s) de " << ar2[i] << endl;
    }
    return 0;
}

float fact(float val, float vez, int sim){

    int res=0;
    cout << "Entrou na funcao \n";
    cout << "val - " << val << "\nvez - " << vez << "\nsim - " << sim << endl;
    if(val>=vez){
        res = int (val / vez);
        cout << "res - " << res << endl;
        qnt[sim] = res;
        ent -= (res * vez);
    }
    return val, qnt[sim];
}

float fact2(float val, float vez, int sim){

    int res=0;
    float res2=0.0;
    cout << "Entrou na funcao moedas \n";
    cout << "val - " << val << "\nvez - " << vez << "\nsim - " << sim << endl;
    if(val>=vez){
        res = val / vez;
        if(vez>=0.01){
            res2 = int (val / vez);
        } else
        {
            res2 = val / vez;
        }
        cout << "res - " << res << endl;
        cout << "res2 - " << res2 << endl;
        moe[sim] = round(res2);
        cout << "moe [sim] - " << moe[sim] << endl;
        tro -= (res2 * vez);
    }
    return val, moe[sim];
}