//Elabore um algoritmo que leia um conjunto indeterminado de valores e informe, ao final, o maior e o menor valor lidos. O algoritmo dever� ser encerrado se o usu�rio digitar um 
//valor negativo ou o valor 0.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int valor;
	int menor;
	int maior;
	
	cout << "D�GITE OS VALORES\n\n";
	cout << "\nD�gite um valor: ";
	cin >> valor;
	
		if (valor <= 0){
		
		cout << "\nO valor inserido � inv�lido, obrigado por participar!\n";
		return 0;
	} else {
		maior = valor;
		menor = valor;
	}
	
	while(true){
		
		cout << "\nDigite um valor: ";
		cin >> valor;
		
		if(valor <= 0){
			break;
		}
		
		else if (valor > maior){
			
			maior = valor;
		}
		
		else if (valor < menor) {
			
			menor = valor;
		}
			
	}
	
	cout << "\n\nO maior valor �: " << maior;
	cout << "\n\nO menor valor �: " << menor << "\n";
	
		
	return 0;
}
