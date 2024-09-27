//Fa�a um algoritmo que fa�a a gera��o da s�rie de fibonacci, at� o termo n informado pelo usu�rio. Por exemplo, se o usu�rio informar o valor 6 dever� ser exibido 8 na tela. 
//Obs.: S�rie de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, ... 
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N;
	int a = 1;
	int b = 1;
	int resultado;
	int i;
	
		cout << "Informe o n�mero vai delimitar a s�rie de Fibonacci: ";
		cin >> N;
		
		if(N == 1 || N == 2){
			
			resultado = 1;
		}	
		else{ 
		
			for(i = 3; i <= N; i++){
				
				resultado = a + b;
				a = b;
				b = resultado;	
			}			
		}
		
		system("cls");
		
		cout << "O " << N << "� n�mero da s�rie de Fibonacci �: " << resultado << "\n\n\n\n\n";
		
	return 0;
}
