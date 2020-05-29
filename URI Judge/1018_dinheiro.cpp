#include <iostream>

using namespace std;

int main(){

    int bas, ent, cem=0, cqn=0, vin=0, dez=0, nco=0, doi=0, um=0;
    cin >> ent;
    bas = ent;

    if(ent>=100){
        cem = ent / 100;
        if(cem>0){
            ent -= (cem*100);
        }
    }

    if(ent>=50){
        cqn = ent / 50; 
        if(cqn>0){
            ent -= (cqn * 50);
        }
    } 
    
    if(ent>=20) {
        vin = ent / 20;
        if(vin>0){
            ent -= (vin * 20);
        }
    }
    
    if(ent>=10) {
        dez = ent / 10;
        if(dez>0){
            ent -= (dez * 10);
        }
    }

    if(ent>=5) {
        nco = ent / 5;
        if(nco>0){
            ent -= (nco * 5);
        }
    }

    if(ent>=2) {
        doi = ent / 2;
        if(doi>0){
            ent -= (doi * 2);
        }
    }

    if(ent>0) {
        um = ent / 1;
        if(um>0){
            ent -= (um * 1);
        }
    }

    cout << bas << "\n";
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cqn << " nota(s) de R$ 50,00"  << endl;
    cout << vin << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << nco << " nota(s) de R$ 5,00" << endl;
    cout << doi << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;

    return 0;
}