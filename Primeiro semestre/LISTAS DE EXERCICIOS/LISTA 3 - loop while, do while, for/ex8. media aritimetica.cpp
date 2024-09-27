//Fa�a um programa que solicita ao usu�rio uma quantidade indeterminada de n�meros inteiros. O programa deve calcular e escrever a m�dia aritm�tica apenas dos n�meros 
//pares. A entrada de dados deve ser encerrada quando o n�mero 0 (ZERO) for digitado.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	float soma = 0;
	double media;
	int contador = 0;
	
	cout << "Calculando a m�dia aritm�tica somente dos n�meros pares!\n\n";
	
	do{
		cout << "D�gite um valor inteiro: ";
		cin >> n;
		cout << "\n";
		
		if(n == 0){
			
			break;
			
		} else if(n%2 == 0){
			
			soma += n;
			contador++;
		}
			
		}while(n != 0);
	
	media = soma/contador;
	
	cout << "\n\nVoc� d�gitou " << contador << " n�meros pares, e a soma deles foi de " << soma << " portanto sua m�dia aritm�tica ficou em: " << media;
			
	return 0;
}
