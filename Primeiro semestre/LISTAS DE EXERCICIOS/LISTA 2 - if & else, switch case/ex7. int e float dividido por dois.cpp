//Fa�a um programa que pe�a um int e um float ao usu�rio, depois exiba os dois n�meros divididos por dois.
#include <iostream>

using namespace std;

int main(){
	
	float valorinteiro;
	float valordecimal;
	
	cout << "Digite um numero inteiro: ";
	cin >> valorinteiro;
	
	cout << "\nDigite um numero decimal: ";
	cin >> valordecimal;
	
	cout << valorinteiro / 2 << endl;
	
	cout << valordecimal / 2 << endl;
	
	return 0;
}
