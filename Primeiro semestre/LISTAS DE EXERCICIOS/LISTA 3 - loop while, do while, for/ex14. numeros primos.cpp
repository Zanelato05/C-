//Fa�a um programa que verifica se um n�mero digitado pelo usu�rio � um n�mero primo, ou seja, um n�mero que s� � divis�vel por 1 e por ele mesmo. 
//Caso seja primo =  �O n�mero � primo�; 
//Caso n�o seja primo = �O n�mero n�o � primo�.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N;
	
	
	do{
	
		cout << "D�gite um n�mero inteiro positivo: ";
		cin >> N;
		
		system("cls");
		
	}while(N <= 0);
		
		if(N == 2){
			
			cout << N << " � um n�mero primo!\n\n\n\n";
			return 0;
			
		}else if(N == 1){
			
			cout << N << " N�o � um n�mero primo!\n\n\n\n";
			return 0;
		}
		
		for(int i = 2; i <= N / 2; i++){
			
			if(N % i == 0){
				
				cout << N << " N�o � um n�mero primo!\n\n\n\n";
				return 0;
			}
		}
		
			
		cout << N << " � um n�mero primo!\n\n\n\n";
			
		
	return 0;
}
