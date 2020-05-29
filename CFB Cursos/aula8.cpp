#include <iostream>
using namespace std;

int main(){
	
	//Declaracao de variaveis
	int num=10;
	
	cout << num << "\n\n";
	
	num = num * -1; // Invertendo valores de variáveis
	
	cout << num << "\n\n";

	cout << -num << "\n\n"; // Inversão momentanea
	
	cout << num << "\n\n";
	
	num = -num; // Inversão permanente
	
	cout << num << "\n\n";
	
	return 0;
}
