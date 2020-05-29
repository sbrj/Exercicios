#include <iostream>
using namespace std;

// Declaracao de variaveis globais
int g1, g2;

int main(){
	
	//Declaracao de variaveis locais
	int n1, n2, res, res1;
	
	g1 = 10;
	g2 = 12;
	n1 = 3;
	n2 = 5;
	
	//Processamento
	res = (g1+g2+n1+n2) - 11;
	
	res1 = g2%n2;
	
	//Saída
	cout << "Soma de todas as variáveis: " << res << "\n\n";
	cout << n1 + n2 << "\n\n";
	cout << g1 << "\n" << g2 << "\n\n";
	cout << res1 << "\n";
	
	
	return 0;
}
