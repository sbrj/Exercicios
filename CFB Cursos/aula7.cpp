#include <iostream>
using namespace std;

int main(){
	
	//Declaracao variáveis
	int n1, n2;
	
	n1 = 0;
	n2 = 10;
	
	cout << n1 << "\n\n"; //Saida
	// n1 = n1 + 1; //Processamento
	
	n1++; //Incremento pós fixado de 1 - bom para contagem
	
	cout << n1 << "\n\n"; //Saída
	
	n2--; //Decremento de 1
	
	cout << n2 << "\n\n";
	
	--n1; //Decremento pré fixado
	
	cout << n1;
	
	return 0;
}
