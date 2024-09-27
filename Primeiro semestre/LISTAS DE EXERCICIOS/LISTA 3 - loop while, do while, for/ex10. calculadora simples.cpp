//Fa�a um programa para uma calculadora simples que solicita ao usu�rio dois operandos como entrada, seleciona uma das op��es da lista 
//(1- soma, 2- multiplica��o, 3- divis�o, 4-pot�ncia) e exibe o resultado. O algoritmo deve executar repetidamente at� que os dois operandos informados sejam iguais a zero.
//Utilize uma vari�vel do tipo real para exibir o resultado.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	double soma;
	double multiplicacao;
	double divisao;
	float base;
	float expoente;
	double operacao;
	
	cout << "                                             CALCULADORA SIMPLES!\n\n\n";
	
	do{
	
		cout << "D�gite o pr�meiro valor (ou base): ";
		cin >> base;
		
		cout << "\nD�gite o segundo valor (ou expoente): ";
		cin >> expoente;
		
		if(base == 0 && expoente == 0){
			
			return 0;
		}
		
		cout << "\n\nQual opera��o voc� deseja realizar: "; 
		
		cout << "1.Soma +  2.Multiplica��o *  3.Divis�o /  4.Pot�ncia ^  ";
		cin >> operacao;
	
	
		if(operacao == 1){
			
			soma = base + expoente;
			cout << "\n\nA soma dos dois valores � de: " << soma << "\n\n\n";
			system("pause");
			
		}else if(operacao == 2){
			
			multiplicacao = base * expoente;
			cout << "\n\nA multiplica��o dos dois valores � de: " << multiplicacao << "\n\n\n";
			system("pause");
			
		}else if(operacao == 3){
			
			divisao = base / expoente;
			cout << "\n\nA divis�o dos dois valores � de: " << divisao << "\n\n\n";
			system("pause");
			
		}else if(operacao == 4){
			
		double potencia = 1;
			
	    for(int i = 0; i < expoente; i++){
		
			potencia *= base;
		}
	
			cout << "\nO resultado de " << base << " elevado a " << expoente << " �: " << potencia << "\n\n\n";
			system("pause");
	
		}else{
			
			cout << "\n\nValor d�gitado incorreto, tente novamente!";
			system("pause");
		}
		
		system("cls");
		
}while( base != 0 || expoente != 0);
	
	cout << "\n\nFim do programa!";
	
		
	return 0;
}
