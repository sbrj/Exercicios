#include <iostream>

using namespace std;

int main(){
    int n, h=0, m=0, s=0;

    cin >> n;

    if(n>=(60*60)){
        h = n / (60*60);
        n -= (h*(60*60));
    }

    if(n>=60){
        m = n / 60;
        n -= (m*60);
    }

    if(n>=0){
        s = n;
    }

    cout << h << ':' << m << ':' << s << endl;

    return 0;
}