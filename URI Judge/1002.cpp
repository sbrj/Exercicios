#include <iostream>
#include <iomanip>
 
using namespace std;

#define n 3.14159

int main() {
 
    double raio, area;
    

    cin >> raio;
    
    raio *= raio;
    
    area = n * raio;
    
    cout << fixed << setprecision(4);

    cout << "A=" << area << endl;
 
    return 0;
}