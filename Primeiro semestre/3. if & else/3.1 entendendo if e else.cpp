#include <iostream>

using namespace std;

int main(){
	
	int x;
	
	cout << "Digite um valor inteiro: ";
	cin >> x;
	
	if(2+x > 0){
		cout << 2+x <<" Eh um numero positivo";
	}
	
	else if(2+x < 0){
		cout << 2+x <<" Eh um numero negativo";
	}
	
	else{
		cout << "resultado eh igual a zero";
	}
	
	
	return 0;
}
	
	//Fa�a um programa em que o usuario digite um valor, se este valor somado com 2 for maior que zero imprima na tela "Eh um numero positivo".
	//se este valor somado com 2 for menor que zero imprima na tela "Eh um numero negativo".
	//caso contrario imprima que resultado � igual a zero
	
	
	
